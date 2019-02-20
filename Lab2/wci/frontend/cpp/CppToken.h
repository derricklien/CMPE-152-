/**
 * <h1>CppToken</h1>
 *
 * <p>Base class for Cpp token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */

#ifndef WCI_FRONTEND_CPP_CPPTOKEN_H_
#define WCI_FRONTEND_CPP_CPPTOKEN_H_

#include <string>
#include <map>
#include "../Token.h"
#include "../Source.h"

namespace wci { namespace frontend { namespace cpp {

using namespace std;
using namespace wci::frontend;

/**
 * Cpp token types.
 */
enum class CppTokenType
{
    // Reserved words.
	AUTO, BREAK, CASE, CHAR, CLASS, CONST, CONTINUE, DO,
	DOUBLE, ELSE, ENUM, EXTERN, FLOAT, FOR, GOTO, IF,
	INT, LONG, NAMESPACE, OPERATOR, PROTECTED, PUBLIC, RETURN, STATIC,
	STRUCT, SWITCH, TEMPLATE, THIS, THROW, UNION, VOID, WHILE,

    // Special symbols.
    TILDE, EXCLAMATION_MARK, AT, PERCENTAGE, CARET, AMPERSAND, STAR, MINUS, PLUS, EQUALS,
    VERTICAL_BAR, FORWARD_SLASH, COLON, SEMI_COLON, QUESTION_MARK, LESS_THAN, GREATER_THAN, DOT, COMMA,
	APOSTROPHE, DOUBLE_QUOTES, LEFT_PAREN, RIGHT_PAREN, LEFT_BRACKET, RIGHT_BRACKET, LEFT_CURLY, RIGHT_CURLY,
    PLUS_PLUS, MINUS_MINUS, LEFT_SHIFT, RIGHT_SHIFT, LESS_EQUAL, GREATER_EQUAL, PLUS_EQUAL, MINUS_EQUAL, STAR_EQUAL, SLASH_EQUAL,
	EQUAL_EQUAL, VERTICAL_EQUAL, PERCENT_EQUAL, AMPERSAND_EQUAL, CARET_EQUAL, NOT_EQUAL, LEFT_SHIFT_EQUAL, RIGHT_SHIFT_EQUAL, OR, AND,
	DOUBLE_SLASH_COMMENT, SLASH_STAR, STAR_SLASH,

    IDENTIFIER, INTEGER, REAL, STRING, CHARACTER,
    ERROR, END_OF_FILE
};

//RESERVED WORDS
constexpr CppTokenType CppT_AUTO = CppTokenType::AUTO;
constexpr CppTokenType CppT_BREAK = CppTokenType::BREAK;
constexpr CppTokenType CppT_CASE = CppTokenType::CASE;
constexpr CppTokenType CppT_CHAR = CppTokenType::CHAR;
constexpr CppTokenType CppT_CLASS = CppTokenType::CLASS;
constexpr CppTokenType CppT_CONST = CppTokenType::CONST;
constexpr CppTokenType CppT_CONTINUE = CppTokenType::CONTINUE;
constexpr CppTokenType CppT_DO = CppTokenType::DO;

constexpr CppTokenType CppT_DOUBLE = CppTokenType::DOUBLE;
constexpr CppTokenType CppT_ELSE = CppTokenType::ELSE;
constexpr CppTokenType CppT_ENUM = CppTokenType::ENUM;
constexpr CppTokenType CppT_EXTERN = CppTokenType::FLOAT;
constexpr CppTokenType CppT_FLOAT = CppTokenType::FLOAT;
constexpr CppTokenType CppT_FOR = CppTokenType::FOR;
constexpr CppTokenType CppT_GOTO = CppTokenType::GOTO;
constexpr CppTokenType CppT_IF = CppTokenType::IF;

constexpr CppTokenType CppT_INT = CppTokenType::INT;
constexpr CppTokenType CppT_LONG = CppTokenType::LONG;
constexpr CppTokenType CppT_NAMESPACE = CppTokenType::NAMESPACE;
constexpr CppTokenType CppT_OPERATOR = CppTokenType::OPERATOR;
constexpr CppTokenType CppT_PROTECTED = CppTokenType::PROTECTED;
constexpr CppTokenType CppT_PUBLIC = CppTokenType::PUBLIC;
constexpr CppTokenType CppT_RETURN = CppTokenType::RETURN;
constexpr CppTokenType CppT_STATIC = CppTokenType::STATIC;

constexpr CppTokenType CppT_STRUCT = CppTokenType::STRUCT;
constexpr CppTokenType CppT_SWITCH = CppTokenType::SWITCH;
constexpr CppTokenType CppT_TEMPLATE = CppTokenType::TEMPLATE;
constexpr CppTokenType CppT_THIS = CppTokenType::THIS;
constexpr CppTokenType CppT_THROW = CppTokenType::THROW;
constexpr CppTokenType CppT_UNION = CppTokenType::UNION;
constexpr CppTokenType CppT_VOID = CppTokenType::VOID;
constexpr CppTokenType CppT_WHILE = CppTokenType::WHILE;

//SPECIAL SYMBOLS
constexpr CppTokenType CppT_TILDE = CppTokenType::TILDE;
constexpr CppTokenType CppT_EXCLAMATION_MARK = CppTokenType::EXCLAMATION_MARK;
constexpr CppTokenType CppT_AT = CppTokenType::AT;
constexpr CppTokenType CppT_PERCENTAGE = CppTokenType::PERCENTAGE;
constexpr CppTokenType CppT_CARET = CppTokenType::CARET;
constexpr CppTokenType CppT_AMPERSAND = CppTokenType::AMPERSAND;
constexpr CppTokenType CppT_STAR = CppTokenType::STAR;
constexpr CppTokenType CppT_MINUS = CppTokenType::MINUS;
constexpr CppTokenType CppT_PLUS = CppTokenType::PLUS;
constexpr CppTokenType CppT_EQUALS = CppTokenType::EQUALS;
constexpr CppTokenType CppT_VERTICAL_BAR = CppTokenType::VERTICAL_BAR;

constexpr CppTokenType CppT_FORWARD_SLASH = CppTokenType::FORWARD_SLASH;
constexpr CppTokenType CppT_COLON = CppTokenType::COLON;
constexpr CppTokenType CppT_SEMI_COLON = CppTokenType::SEMI_COLON;
constexpr CppTokenType CppT_QUESTION_MARK = CppTokenType::QUESTION_MARK;
constexpr CppTokenType CppT_LESS_THAN = CppTokenType::LESS_THAN;
constexpr CppTokenType CppT_GREATER_THAN = CppTokenType::GREATER_THAN;
constexpr CppTokenType CppT_DOT = CppTokenType::DOT;
constexpr CppTokenType CppT_COMMA = CppTokenType::COMMA;

constexpr CppTokenType CppT_APOSTROPHE = CppTokenType::APOSTROPHE;
constexpr CppTokenType CppT_DOUBLE_QUOTES = CppTokenType::DOUBLE_QUOTES;
constexpr CppTokenType CppT_LEFT_PAREN = CppTokenType::LEFT_PAREN;
constexpr CppTokenType CppT_RIGHT_PAREN = CppTokenType::RIGHT_PAREN;
constexpr CppTokenType CppT_LEFT_BRACKET = CppTokenType::LEFT_BRACKET;
constexpr CppTokenType CppT_RIGHT_BRACKET = CppTokenType::RIGHT_BRACKET;
constexpr CppTokenType CppT_LEFT_CURLY = CppTokenType::LEFT_CURLY;
constexpr CppTokenType CppT_RIGHT_CURLY = CppTokenType::RIGHT_CURLY;

constexpr CppTokenType CppT_PLUS_PLUS = CppTokenType::PLUS_PLUS;
constexpr CppTokenType CppT_MINUS_MINUS = CppTokenType::MINUS_MINUS;
constexpr CppTokenType CppT_LEFT_SHIFT = CppTokenType::LEFT_SHIFT;
constexpr CppTokenType CppT_RIGHT_SHIFT = CppTokenType::RIGHT_SHIFT;
constexpr CppTokenType CppT_LESS_EQUAL = CppTokenType::LESS_EQUAL;
constexpr CppTokenType CppT_GREATER_EQUAL = CppTokenType::GREATER_EQUAL;
constexpr CppTokenType CppT_PLUS_EQUAL = CppTokenType::PLUS_EQUAL;
constexpr CppTokenType CppT_MINUS_EQUAL = CppTokenType::MINUS_EQUAL;
constexpr CppTokenType CppT_STAR_EQUAL = CppTokenType::STAR_EQUAL;
constexpr CppTokenType CppT_SLASH_EQUAL = CppTokenType::SLASH_EQUAL;

constexpr CppTokenType CppT_EQUAL_EQUAL = CppTokenType::EQUAL_EQUAL;
constexpr CppTokenType CppT_VERTICAL_EQUAL = CppTokenType::VERTICAL_EQUAL;
constexpr CppTokenType CppT_PERCENT_EQUAL = CppTokenType::PERCENT_EQUAL;
constexpr CppTokenType CppT_AMPERSAND_EQUAL = CppTokenType::AMPERSAND_EQUAL;
constexpr CppTokenType CppT_CARET_EQUAL = CppTokenType::CARET_EQUAL;
constexpr CppTokenType CppT_NOT_EQUAL = CppTokenType::NOT_EQUAL;
constexpr CppTokenType CppT_LEFT_SHIFT_EQUAL = CppTokenType::LEFT_SHIFT_EQUAL;
constexpr CppTokenType CppT_RIGHT_SHIFT_EQUAL = CppTokenType::RIGHT_SHIFT_EQUAL;
constexpr CppTokenType CppT_OR = CppTokenType::OR;
constexpr CppTokenType CppT_AND = CppTokenType::AND;

constexpr CppTokenType CppT_DOUBLE_SLASH_COMMENT = CppTokenType::DOUBLE_SLASH_COMMENT;
constexpr CppTokenType CppT_SLASH_STAR = CppTokenType::SLASH_STAR;
constexpr CppTokenType CppT_STAR_SLASH = CppTokenType::STAR_SLASH;

constexpr CppTokenType CppT_IDENTIFIER = CppTokenType::IDENTIFIER;
constexpr CppTokenType CppT_INTEGER = CppTokenType::INTEGER;
constexpr CppTokenType CppT_REAL = CppTokenType::REAL;
constexpr CppTokenType CppT_STRING = CppTokenType::STRING;
constexpr CppTokenType CppT_CHARACTER = CppTokenType::CHARACTER;
constexpr CppTokenType CppT_ERROR = CppTokenType::ERROR;
constexpr CppTokenType CppT_END_OF_FILE = CppTokenType::END_OF_FILE;

class CppToken : public Token
{
public:
    static map<string, CppTokenType> RESERVED_WORDS;
    static map<string, CppTokenType> SPECIAL_SYMBOLS;
    static map<CppTokenType, string> SPECIAL_SYMBOL_NAMES;

protected:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CppToken(Source *source) throw (string);

private:
    static bool INITIALIZED;

    /**
     * Initialize the static maps.
     */
    static void initialize();
};

}}}  // namespace wci::frontend::pascal

#endif /* WCI_FRONTEND_CPP_CPPTOKEN_H_ */
