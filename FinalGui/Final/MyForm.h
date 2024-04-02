#pragma once


namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ but_upload;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::Button^ but_submit;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ but_clear;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ but_NCfile;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->but_upload = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->but_submit = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->but_clear = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->but_NCfile = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::RoyalBlue;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(980, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Word Cloud Generator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// but_upload
			// 
			this->but_upload->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->but_upload->BackColor = System::Drawing::SystemColors::Control;
			this->but_upload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upload->Location = System::Drawing::Point(24, 121);
			this->but_upload->Margin = System::Windows::Forms::Padding(2);
			this->but_upload->Name = L"but_upload";
			this->but_upload->Size = System::Drawing::Size(981, 43);
			this->but_upload->TabIndex = 2;
			this->but_upload->Text = L"Select Directory";
			this->but_upload->UseVisualStyleBackColor = false;
			this->but_upload->Click += gcnew System::EventHandler(this, &MyForm::but_upload_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(159, 46);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter K";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(192, 251);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(168, 53);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// but_submit
			// 
			this->but_submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_submit->Location = System::Drawing::Point(434, 617);
			this->but_submit->Name = L"but_submit";
			this->but_submit->Size = System::Drawing::Size(164, 50);
			this->but_submit->TabIndex = 7;
			this->but_submit->Text = L"Submit";
			this->but_submit->UseVisualStyleBackColor = true;
			this->but_submit->Click += gcnew System::EventHandler(this, &MyForm::but_submit_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(24, 305);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(969, 306);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// but_clear
			// 
			this->but_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_clear->Location = System::Drawing::Point(641, 617);
			this->but_clear->Name = L"but_clear";
			this->but_clear->Size = System::Drawing::Size(164, 50);
			this->but_clear->TabIndex = 6;
			this->but_clear->Text = L"Clear";
			this->but_clear->UseVisualStyleBackColor = true;
			this->but_clear->Click += gcnew System::EventHandler(this, &MyForm::but_clear_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 76);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(981, 50);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Select Directory For Word Count and Word Cloud Generate";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// but_NCfile
			// 
			this->but_NCfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->but_NCfile->BackColor = System::Drawing::SystemColors::Control;
			this->but_NCfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_NCfile->Location = System::Drawing::Point(24, 208);
			this->but_NCfile->Margin = System::Windows::Forms::Padding(2);
			this->but_NCfile->Name = L"but_NCfile";
			this->but_NCfile->Size = System::Drawing::Size(981, 43);
			this->but_NCfile->TabIndex = 10;
			this->but_NCfile->Text = L"Select Directory";
			this->but_NCfile->UseVisualStyleBackColor = false;
			this->but_NCfile->Click += gcnew System::EventHandler(this, &MyForm::but_NCfile_Click_1);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::SystemColors::Info;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 156);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(981, 50);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Select Directory For Not";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(217, 617);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 50);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Save Output";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1024, 701);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->but_NCfile);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->but_submit);
			this->Controls->Add(this->but_clear);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->but_upload);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Word Cloud Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void but_submit_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int k = System::Convert::ToInt32(numericUpDown1->Text);
		//String^ Path = System::Convert::ToString(richTextBox1->Text);

		// Call the Source function with appropriate arguments
		System::String^ result=Source(msclr::interop::marshal_as<std::string>(but_upload->Text), msclr::interop::marshal_as<std::string>(but_NCfile->Text), k);
		richTextBox1->Text =result ;

	
	}

	private: System::Void but_upload_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ openfolderdialog1 = gcnew FolderBrowserDialog();
		openfolderdialog1->ShowDialog();
		but_upload->Text = openfolderdialog1->SelectedPath;

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void but_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		but_upload->Text = L"C:\\Users\\DELL\\Desktop\\DSA\\new\\DS_Crafters-Capstone\\test";
		richTextBox1->Text = L"";
		but_NCfile->Text = L"C:\\Users\\DELL\\Desktop\\DSA\\new\\DS_Crafters-Capstone\\not count\\nc.txt";
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void but_NCfile_Click_1(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openfiledialog1 = gcnew OpenFileDialog();
	openfiledialog1->ShowDialog();
	but_NCfile->Text = openfiledialog1->FileName;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	FolderBrowserDialog^ openfolderdialog1 = gcnew FolderBrowserDialog();
	openfolderdialog1->Description="Save Output";
	openfolderdialog1->ShowDialog();
	
}
};
}
