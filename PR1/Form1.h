#pragma once
#include <ctime>
#include <stdlib.h>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int limit = 1000;
	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 356);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wpisz wagê przedmiotu";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 415);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(162, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"100";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(300, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"ZatwierdŸ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(366, 418);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Status";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(352, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"PRZEDMIOT";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(473, 441);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 35);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(659, 488);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Symulator DŸwigu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int wagaa;
	int x = 270;
	String^ waga = textBox1->Text;
	wagaa = Convert::ToInt32(waga);
	if (wagaa < limit) {
		this->label2->Text = "Podnoszenie";
		for (int i = 0; i < 100; i++) {
			x -= 1;
			this->label3->Location = System::Drawing:: Point(250, x);
			_sleep(10);

		}
		
		
	}
	else {
		this->label2->Text = "Przedmiot jest za ciezki";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	this->label3->Location = System::Drawing::Point(250, 270);
	this->label2->Text = "Status";
	this->textBox1->Text = L"100";
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
