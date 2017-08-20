#include "MyForm.h"
using namespace Whist;

int main()
{
	MyForm^ mainWindow = gcnew MyForm();
	mainWindow->ShowDialog();
	return 0;
}