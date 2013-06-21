/* Module_Name */
MyModule.nxc

/* DEFINES */
#define MYMODULE_GLOBAL_CONSTANT 1
#define LOCAL_CONSTANT 1
static const type TYPESAFE_CONSTANT = const_value;

/* Variables */
type g_MyModule_AllGlobalVariable;
static type g_GlobalVariableRestrictedToModule;
type localVariable;

/* Functions */
MyModule_FunctionName();
LocalFunctionName();

/* Function_Style */
void MyModule_MyFunction(const type& const readonlyParam)
{
	if(condition)
	{
		DoSomething();
	}
	else
	{
		DoSomethingElse();
	}
}

/* Structs  */
struct MyStruct
{
	static const type CLASS_CONSTANT = const_value;
	const type* const mMyConstMember;

};

enum MyEnum
{
	FIRST_ELEMENT = 0,
	LAST_ELEMENT
}