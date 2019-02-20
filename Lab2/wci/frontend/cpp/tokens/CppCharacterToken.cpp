/*
 * CppCharacterToken.cpp
 *
 *  Created on: Feb 15, 2019
 *      Author: Jeanie
 */


#include "CppCharacterToken.h"
#include <string>
#include "../CppError.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::cpp;

CppCharacterToken::CppCharacterToken(Source *source) throw (string) : CppToken(source)
{
	extract();
}

void CppCharacterToken::extract() throw (string)
{
	string value_string = "";

	char current_ch = next_char();
	text += "'";
	value_string += '\'';

	//Get char

	if (isspace(current_ch)) current_ch = ' ';

	else if((current_ch != '\'') && (current_ch != EOF))
	{
		if (current_ch == '\\')
		{
    		text += current_ch;
    		current_ch = next_char();

    		switch(current_ch)
    		{
    		case '\'':
    			value_string += '\'';
    			break;

    		case '\\':
    			value_string += '\\';
    			break;

    		case 't':
        		value_string += '\t';
        		break;

    		case 'n':
        		value_string += '\n';
        		break;

    		default:
    			break;
    		}
    		text += current_ch;
    		current_ch = next_char();

		}
		else
		{
    		text += current_ch;
    		value_string += current_ch;
    		current_ch = next_char();
		}
	}


	if(current_ch == '\'')
	{
		next_char();	//consume final quote
		text += '\'';
		value_string += '\'';
		type = (TokenType) CppT_CHARACTER;
		value = value_string;
	}
	else
	{
		type = (TokenType) CppT_ERROR;
		value = (int) UNEXPECTED_EOF;
	}



}

}}}}  // namespace wci::frontend::cpp::tokens

