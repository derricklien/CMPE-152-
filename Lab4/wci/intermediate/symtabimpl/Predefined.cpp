/**
 * <h1>Predefined</h1>
 *
 * <p>Enter the predefined Pascal types, identifiers, and constants
 * into the symbol table.</p>
 *
 * <p>Copyright (c) 2009 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <vector>
#include "Predefined.h"
#include "SymTabEntryImpl.h"
#include "../TypeSpec.h"
#include "../TypeFactory.h"
#include "../SymTabStack.h"
#include "../typeimpl/TypeSpecImpl.h"
#include "../../Object.h"
#include "../SymTabFactory.h"

namespace wci { namespace intermediate { namespace symtabimpl {

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::typeimpl;

// Predefined types.
TypeSpec *Predefined::integer_type;
TypeSpec *Predefined::real_type;
TypeSpec *Predefined::boolean_type;
TypeSpec *Predefined::char_type;
TypeSpec *Predefined::complex_type;
TypeSpec *Predefined::undefined_type;
TypeSpec *Predefined::im_type;
TypeSpec *Predefined::re_type;

// Predefined identifiers.
SymTabEntry *Predefined::integer_id;
SymTabEntry *Predefined::real_id;
SymTabEntry *Predefined::boolean_id;
SymTabEntry *Predefined::char_id;
SymTabEntry *Predefined::complex_id;
SymTabEntry *Predefined::false_id;
SymTabEntry *Predefined::true_id;
SymTabEntry *Predefined::re_id;
SymTabEntry *Predefined::im_id;

void Predefined::initialize(SymTabStack *symtab_stack)
{
    initialize_types(symtab_stack);
    initialize_constants(symtab_stack);
    //initialize_fields(symtab_stack);
}

/**
 * Initialize the predefined types.
 * @param symTabStack the symbol table stack to initialize.
 */
void Predefined::initialize_types(SymTabStack *symtab_stack)
{
    // Type integer.
    integer_id = symtab_stack->enter_local("integer");
    integer_type = TypeFactory::create_type((TypeForm) TF_SCALAR);
    integer_type->set_identifier(integer_id);
    integer_id->set_definition((Definition) DF_TYPE);
    integer_id->set_typespec(integer_type);

    // Type real.
    real_id = symtab_stack->enter_local("real");
    real_type = TypeFactory::create_type((TypeForm) TF_SCALAR);
    real_type->set_identifier(real_id);
    real_id->set_definition((Definition) DF_TYPE);
    real_id->set_typespec(real_type);

    // Type boolean.
    boolean_id = symtab_stack->enter_local("boolean");
    boolean_type = TypeFactory::create_type((TypeForm) TF_ENUMERATION);
    boolean_type->set_identifier(boolean_id);
    boolean_id->set_definition((Definition) DF_TYPE);
    boolean_id->set_typespec(boolean_type);

    // Type char	.
    char_id = symtab_stack->enter_local("char");
    char_type = TypeFactory::create_type((TypeForm) TF_SCALAR);
    char_type->set_identifier(char_id);
    char_id->set_definition((Definition) DF_TYPE);
    char_id->set_typespec(char_type);

    //Type complex
    complex_id = symtab_stack->enter_local("complex");
    complex_type = TypeFactory::create_type((TypeForm) TF_RECORD);
    complex_type->set_identifier(complex_id);
    complex_id->set_definition((Definition) DF_TYPE);
    complex_id->set_typespec(complex_type);

    SymTab* symtab = SymTabFactory::create_symtab(0);
    SymTabEntry* re_id = symtab->enter("re");
    SymTabEntry* im_id = symtab->enter("im");
    re_id->set_typespec(real_type);
    im_id->set_typespec(real_type);
    re_id->set_definition((Definition) DF_TYPE);
    im_id->set_definition((Definition) DF_TYPE);
    complex_type->set_attribute((TypeKey) RECORD_SYMTAB,symtab);

    // Undefined type.
    undefined_type = TypeFactory::create_type((TypeForm) TF_SCALAR);
}

void Predefined::initialize_constants(SymTabStack *symtab_stack)
{
    // Boolean enumeration constant false.
    false_id = symtab_stack->enter_local("false");
    false_id->set_definition((Definition) DF_ENUMERATION_CONSTANT);
    false_id->set_typespec(boolean_type);
    false_id->set_attribute((SymTabKey) CONSTANT_VALUE, 0);

    // Boolean enumeration constant true.
    true_id = symtab_stack->enter_local("true");
    true_id->set_definition((Definition) DF_ENUMERATION_CONSTANT);
    true_id->set_typespec(boolean_type);
    true_id->set_attribute((SymTabKey) CONSTANT_VALUE, 1);

    // Add false and true to the boolean enumeration type.
    vector<SymTabEntry *> constants;
    constants.push_back(false_id);
    constants.push_back(true_id);
    boolean_type->set_attribute((TypeKey) ENUMERATION_CONSTANTS,
                                constants);
}

}}}  // namespace wci::intermediate::symtabimpl
