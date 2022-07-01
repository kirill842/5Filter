#include "MyForm.h"
#include <vector>
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kursovaya2::MyForm form;
	Application::Run(% form);
}