#include "Source.cpp"
#include "MyForm.h"
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm> 
#include <unordered_map>
#include <map>
using namespace std;
//namespace file_s = filesystem;

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	$safeprojectname$::MyForm form;
	Application::Run(% form);
	return 0;
}