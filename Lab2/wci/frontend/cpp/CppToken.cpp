/**
 * <h1>CppToken</h1>
 *
 * <p>Base class for Cpp token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "CppToken.h"

#include <string>
#include <vector>
#include <map>

namespace wci { namespace frontend { namespace cpp {

using namespace std;

map<string, CppTokenType> CppToken::RESERVED_WORDS;
map<string, CppTokenType> CppToken::SPECIAL_SYMBOLS;
map<CppTokenType, string> CppToken::SPECIAL_SYMBOL_NAMES;

bool CppToken::INITIALIZED = false;

void CppToken::initialize()
{
    if (INITIALIZED) return;
    //Reserved words
    vector<string> rw_strings =
    {
        "auto", "break", "case", "char", "class", "const", "continue", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "namespace", "operator", "protected", "public", "return", "static",
        "program", "record", "repeat", "set", "then", "to", "type",
        "struct", "switch", "template", "this", "throw", "union", "void", "while"
    };

    vector<CppTokenType> rw_keys =
    {
        CppTokenType::AUTO,
        CppTokenType::BREAK,
        CppTokenType::CASE,
        CppTokenType::CHAR,
        CppTokenType::CLASS,
        CppTokenType::CONST,
        CppTokenType::DO,

        CppTokenType::DOUBLE,
        CppTokenType::ELSE,
        CppTokenType::ENUM,
        CppTokenType::EXTERN,
        CppTokenType::FLOAT,
        CppTokenType::FOR,
        CppTokenType::GOTO,
        CppTokenType::IF,

        CppTokenType::INT,
        CppTokenType::LONG,
        CppTokenType::NAMESPACE,
        CppTokenType::OPERATOR,
        CppTokenType::PROTECTED,
        CppTokenType::PUBLIC,
        CppTokenType::RETURN,
        CppTokenType::STATIC,

        CppTokenType::STRUCT,
        CppTokenType::SWITCH,
        CppTokenType::TEMPLATE,
        CppTokenType::THIS,
        CppTokenType::THROW,
        CppTokenType::UNION,
        CppTokenType::VOID,
        CppTokenType::WHILE,
    };

    for (int i = 0; i < rw_strings.size(); i++)
    {
        RESERVED_WORDS[rw_strings[i]] = rw_keys[i];
    }
    //Special symbols
    vector<string> ss_strings =
    {
        "~", "!", "@", "%", "^", "&", "*", "-", "+", "=",
		"|", "/", ":", ";", "?", "<", ">", ".", ",",
		"'", " "" ", "(", ")", "[", "]", "{", "}",
		"++", "--", "<<", ">>", "<=", ">=", "+=", "-+", "*=", "/=",
		"==", "|=", "%=", "&=", "^=", "!=", "<<=", ">>=", "||", "&&",
		"//", "/*", "*/"
    };

    vector<CppTokenType> ss_keys =
    {
        CppTokenType::TILDE,
        CppTokenType::EXCLAMATION_MARK,
        CppTokenType::AT,
        CppTokenType::PERCENTAGE,
        CppTokenType::CARET,
        CppTokenType::AMPERSAND,
        CppTokenType::STAR,
        CppTokenType::MINUS,
        CppTokenType::PLUS,
        CppTokenType::EQUALS,
        CppTokenType::VERTICAL_BAR,

        CppTokenType::FORWARD_SLASH,
        CppTokenType::COLON,
        CppTokenType::SEMI_COLON,
        CppTokenType::QUESTION_MARK,
        CppTokenType::LESS_THAN,
        CppTokenType::GREATER_THAN,
        CppTokenType::DOT,
        CppTokenType::COMMA,

        CppTokenType::APOSTROPHE,
        CppTokenType::DOUBLE_QUOTES,
        CppTokenType::LEFT_PAREN,
        CppTokenType::RIGHT_PAREN,
        CppTokenType::LEFT_BRACKET,
		CppTokenType::RIGHT_BRACKET,
		CppTokenType::LEFT_CURLY,
		CppTokenType::RIGHT_CURLY,

		CppTokenType::PLUS_PLUS,
		CppTokenType::MINUS_MINUS,
		CppTokenType::LEFT_SHIFT,
		CppTokenType::RIGHT_SHIFT,
		CppTokenType::LESS_EQUAL,
		CppTokenType::GREATER_EQUAL,
		CppTokenType::PLUS_EQUAL,
		CppTokenType::MINUS_EQUAL,
		CppTokenType::STAR_EQUAL,
		CppTokenType::SLASH_EQUAL,

		CppTokenType::EQUAL_EQUAL,
		CppTokenType::VERTICAL_EQUAL,
		CppTokenType::PERCENT_EQUAL,
		CppTokenType::AMPERSAND_EQUAL,
		CppTokenType::CARET_EQUAL,
		CppTokenType::NOT_EQUAL,
		CppTokenType::LEFT_SHIFT_EQUAL,
		CppTokenType::RIGHT_SHIFT_EQUAL,
		CppTokenType::OR,
		CppTokenType::AND,

		CppTokenType::DOUBLE_SLASH_COMMENT,
		CppTokenType::SLASH_STAR,
		CppTokenType::STAR_SLASH

    };

    for (int i = 0; i < ss_strings.size(); i++)
    {
        SPECIAL_SYMBOLS[ss_strings[i]] = ss_keys[i];
    }

    vector<string> ss_names =
    {
        "tilde", "exclaimation_mark", "at", "percentage", "caret", "ampersand", "star",
        "minus", "plus", "equals",

		"vertical_bar", "forward_slash", "colon", "semi_colon", "question_mark", "less_than",
        "greater_than", "dot", "comma",

		"apostrophe", "double_quotes", "left_paren", "right_paren", "left_bracket", "right_bracket", "left_curly", "right_curly",

	    "plus_plus", "minus_minus", "left_shift", "right_shift", "less_equal", "greater_equal", "plus_equal", "minus_equal", "star_equal", "slash_equal",

		"equal_equal", "vertical_equal", "percent_equal", "ampersand_equal", "caret_equal", "not_equal", "left_shift_equal", "right_shift_equal", "or", "and",

		"double_slash_comment", "slash_star", "star_slash"


    };

    for (int i = 0; i < ss_names.size(); i++)
    {
        SPECIAL_SYMBOL_NAMES[ss_keys[i]] = ss_names[i];
    }

    INITIALIZED = true;
}

CppToken::CppToken(Source *source) throw (string)
    : Token(source)
{
    initialize();
}

}}}  // namespace wci::frontend::cpp
