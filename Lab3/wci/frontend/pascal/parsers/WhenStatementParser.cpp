#include <string>
#include <set>
#include "WhenStatementParser.h"
#include "StatementParser.h"
#include "AssignmentStatementParser.h"
#include "ExpressionParser.h"
#include "../PascalParserTD.h"
#include "../PascalToken.h"
#include "../PascalError.h"
#include "../../Token.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/ICodeFactory.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

bool WhenStatementParser::INITIALIZED = false;

set<PascalTokenType> WhenStatementParser::ARROW_SET;

void WhenStatementParser::initialize()
{
	if (INITIALIZED) return;

	ARROW_SET = StatementParser::STMT_START_SET;
	ARROW_SET.insert(PascalTokenType::ARROW);

	set<PascalTokenType>::iterator it;
	for (it  = StatementParser::STMT_FOLLOW_SET.begin();
			it != StatementParser::STMT_FOLLOW_SET.end();
			it++)
	{
		ARROW_SET.insert(*it);
	}

	INITIALIZED = true;
}

WhenStatementParser::WhenStatementParser(PascalParserTD *parent)
: StatementParser(parent)
{
	initialize();
}

ICodeNode *WhenStatementParser::parse_statement(Token *token) throw (string)
    		{
	token = next_token(token);  // consume the WHEN

	// Create a WHEN node
	ICodeNode *when_node = ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN);

	// Parse the expression.
	// The WHEN node adopts the expression subtree as its first child.
	//For this, it would be the condition(equal).
	ExpressionParser expression_parser(this);
	when_node->add_child(expression_parser.parse_statement(token));

	// Synchronize at the ARROW.
	token = synchronize(ARROW_SET);

	if (token->get_type() == (TokenType) PT_ARROW)
	{
		token = next_token(token);  // consume the ARROW
	}
	else {
		error_handler.flag(token, MISSING_ARROW, this);
	}

<<<<<<< HEAD
	// Parse the compound statement.
	// The WHEN node adopts the statement subtree as its second child.
	//For this, it would be the assignment
	StatementParser statement_parser(this);
	when_node->add_child(statement_parser.parse_statement(token));
	token = current_token();
=======
    //Parse the => (much like the THEN statement)
    //This will be the second child
    StatementParser statement_parser(this);
    when_node->add_child(statement_parser.parse_statement(token));
    token = current_token();
    token = next_token(token);
>>>>>>> branch 'master' of https://github.com/derricklien/CMPE-152-.git

	token = next_token(token); //consumes the semicolon

	// Make a parent WHEN node
	ICodeNode *parent_node = when_node;

	// Keeps going until END.
	while(token->get_type() != (TokenType) PT_END)
	{
		// Make WHEN tree node
		ICodeNode *when_node2 = ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN);

		// Parse expression
		// The WHEN node adopts the expression subtree as its first child.
		//For this, it would be the condition (equals)
		when_node2->add_child(expression_parser.parse_statement(token));

		// Synchronize at the ARROW.
		token = synchronize(ARROW_SET);

		if (token->get_type() == (TokenType) PT_ARROW)
		{
			token = next_token(token);  // consume the ARROW
		}
		else {
			error_handler.flag(token, MISSING_ARROW, this);
		}

		// Parse the compound statement.
		// The WHEN node adopts the statement subtree as its second child.
		//for this, it would be the assignment
		when_node2->add_child(statement_parser.parse_statement(token));
		token = current_token();

		token = next_token(token); //consume the semicolon

		// Look for an OTHERWISE.
		if (token->get_type() == (TokenType) PT_OTHERWISE)
		{
			token = next_token(token);  // consume the OTHERWISE

			// Synchronize at the ARROW.
			token = synchronize(ARROW_SET);

			if (token->get_type() == (TokenType) PT_ARROW)
			{
				token = next_token(token);  // consume the ARROW
			}
			else
			{
				error_handler.flag(token, MISSING_ARROW, this);
			}

			// Parse the compound statement.
			// The WHEN node adopts the statement subtree as its third child.
			//For this, it would be another assignment after the OTHERWISE
			when_node2->add_child(statement_parser.parse_statement(token));
			token = current_token();
		}

		// Attach the looped WHEN tree to WHEN parent tree as its third child
		parent_node->add_child(when_node2);
		// Make third child as the new parent
		parent_node = when_node2;

	}

	if (token->get_type() == (TokenType) PT_END)
	{
		token = next_token(token); // consume END
	}

	return when_node;
}

}}}} // namespace wci::frontend::pascal::parsers
