#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;



void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	myRestaurantProject::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		MessageBox::Show("Successfull Authentification of ",
			"Program.cpp", MessageBoxButtons::OK);
	}

	else {
		MessageBox::Show("Authentification Canceled",
			"Program.cpp", MessageBoxButtons::OK);
	}
}