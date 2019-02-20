/**
 * <h1>CppErrorToken</h1>
 *
 * <p>Cpp error token.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "../../Token.h"
#include "../CppToken.h"
#include "CppErrorToken.h"

namespace wci { namespace frontend { namespace cpp { namespace tokens {

using namespace std;
using namespace wci::frontend::cpp;

CppErrorToken::CppErrorToken(Source *source, CppErrorCode error_code,
                                   string token_text)
    throw (string)
    : CppToken(source)
{
    type = (TokenType) CppT_ERROR;
    text = token_text;
    value = (int) error_code;
}

void CppErrorToken::extract() throw (string)
{
    // do nothing
}

}}}}  // namespace wci::frontend::cpp::tokens
