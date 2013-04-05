void testColors();
void testNinjas();
void testLValue();
void testAssignIntToEnumType();
void testStaticCastIntToEnum();
void testDefineEnumInTermsOfEachOther();
void testMainEnumScope();
void testGlobalEnumScope();
void testDefineWithVariables();

/*
DOESN'T WORK.
ERROR:
main.h:12: error: use of enum ‘GlobalEnum’ without previous declaration
main.h:12: error: a storage class can only be specified for objects and functions
main.h: In function ‘void testGlobalDifferentFile()’:
main.h:16: error: ‘g’ was not declared in this scope
main.h:16: error: ‘ZERO’ was not declared in this scope

extern enum GlobalEnum;

void testGlobalDifferentFile()
{
	g = ZERO;
}

*/
