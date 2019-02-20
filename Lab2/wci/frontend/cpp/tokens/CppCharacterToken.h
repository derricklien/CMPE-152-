/*
 * CppCharacterToken.h
 *
 *  Created on: Feb 15, 2019
 *      Author: Jeanie
 */

#ifndef WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_
#define WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_

#include <string>
#include "../CppToken.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend::cpp;

class CppCharacterToken : public CppToken
{
public:
	CppCharacterToken(Source *source) throw (string);

protected:
	void extract() throw (string);
};

}}}}



#endif /* WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_ */
