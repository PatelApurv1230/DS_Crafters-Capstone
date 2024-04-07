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


	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::Button^ but_submit;


	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ but_clear;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ but_NCfile;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::RadioButton^ radioButton1;

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label8;














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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->but_submit = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->but_clear = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->but_NCfile = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::Color::RoyalBlue;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1369, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Word Cloud Generator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// but_upload
			// 
			this->but_upload->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->but_upload->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->but_upload->AutoEllipsis = true;
			this->but_upload->BackColor = System::Drawing::SystemColors::Control;
			this->but_upload->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_upload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_upload->Location = System::Drawing::Point(0, 153);
			this->but_upload->Margin = System::Windows::Forms::Padding(0);
			this->but_upload->Name = L"but_upload";
			this->but_upload->Size = System::Drawing::Size(1369, 62);
			this->but_upload->TabIndex = 2;
			this->but_upload->Text = L"Select Directory";
			this->but_upload->UseVisualStyleBackColor = false;
			this->but_upload->Click += gcnew System::EventHandler(this, &MyForm::but_upload_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericUpDown1->Location = System::Drawing::Point(1007, 340);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(200, 48);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// but_submit
			// 
			this->but_submit->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->but_submit->BackColor = System::Drawing::Color::Turquoise;
			this->but_submit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_submit->ForeColor = System::Drawing::SystemColors::InfoText;
			this->but_submit->Location = System::Drawing::Point(589, 860);
			this->but_submit->Margin = System::Windows::Forms::Padding(4);
			this->but_submit->Name = L"but_submit";
			this->but_submit->Size = System::Drawing::Size(219, 62);
			this->but_submit->TabIndex = 7;
			this->but_submit->Text = L"Submit";
			this->but_submit->UseVisualStyleBackColor = false;
			this->but_submit->Click += gcnew System::EventHandler(this, &MyForm::but_submit_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(0, 338);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(688, 500);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// but_clear
			// 
			this->but_clear->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->but_clear->BackColor = System::Drawing::Color::Turquoise;
			this->but_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->but_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_clear->ForeColor = System::Drawing::SystemColors::InfoText;
			this->but_clear->Location = System::Drawing::Point(832, 860);
			this->but_clear->Margin = System::Windows::Forms::Padding(4);
			this->but_clear->Name = L"but_clear";
			this->but_clear->Size = System::Drawing::Size(219, 62);
			this->but_clear->TabIndex = 6;
			this->but_clear->Text = L"Clear";
			this->but_clear->UseVisualStyleBackColor = false;
			this->but_clear->Click += gcnew System::EventHandler(this, &MyForm::but_clear_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->BackColor = System::Drawing::SystemColors::Info;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1369, 61);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Select Directory For Word Count and Word Cloud Generate";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// but_NCfile
			// 
			this->but_NCfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->but_NCfile->BackColor = System::Drawing::Color::Salmon;
			this->but_NCfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->but_NCfile->Location = System::Drawing::Point(0, 276);
			this->but_NCfile->Margin = System::Windows::Forms::Padding(0);
			this->but_NCfile->Name = L"but_NCfile";
			this->but_NCfile->Size = System::Drawing::Size(1369, 62);
			this->but_NCfile->TabIndex = 10;
			this->but_NCfile->Text = L"NotCount.txt";
			this->but_NCfile->UseVisualStyleBackColor = false;
			this->but_NCfile->Click += gcnew System::EventHandler(this, &MyForm::but_NCfile_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button1->Location = System::Drawing::Point(336, 860);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 62);
			this->button1->TabIndex = 12;
			this->button1->Tag = L"";
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->BackColor = System::Drawing::SystemColors::Info;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(689, 337);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(680, 61);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Enter K                   ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(9, 214);
			this->radioButton1->Margin = System::Windows::Forms::Padding(0);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->radioButton1->Size = System::Drawing::Size(555, 62);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->Text = L"   Select File For Not Count Word ";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton3->BackColor = System::Drawing::Color::AntiqueWhite;
			this->radioButton3->Checked = true;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(564, 214);
			this->radioButton3->Margin = System::Windows::Forms::Padding(0);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->radioButton3->Size = System::Drawing::Size(369, 62);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Use Our File";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->radioButton4->BackColor = System::Drawing::Color::AntiqueWhite;
			this->radioButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(933, 214);
			this->radioButton4->Margin = System::Windows::Forms::Padding(0);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->radioButton4->Size = System::Drawing::Size(389, 62);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->Text = L"Count All Words";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::AntiqueWhite;
			this->label3->Location = System::Drawing::Point(-3, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1371, 65);
			this->label3->TabIndex = 22;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericUpDown2->Location = System::Drawing::Point(904, 463);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(0);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(193, 48);
			this->numericUpDown2->TabIndex = 24;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, System::Int32::MinValue });
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->BackColor = System::Drawing::SystemColors::Info;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(688, 459);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(690, 62);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Enter DEG            ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericUpDown4->Location = System::Drawing::Point(1151, 463);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(200, 48);
			this->numericUpDown4->TabIndex = 25;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown3_ValueChanged);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::Color::HotPink;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(688, 398);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(679, 61);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Image Properties";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label7->BackColor = System::Drawing::SystemColors::Info;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(689, 521);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(679, 62);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Font";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::LemonChiffon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(904, 525);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(462, 58);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Font\r\n";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->BackColor = System::Drawing::SystemColors::Info;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(688, 659);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(673, 179);
			this->richTextBox2->TabIndex = 31;
			this->richTextBox2->Text = L"";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label8->BackColor = System::Drawing::Color::HotPink;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(688, 583);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(679, 73);
			this->label8->TabIndex = 32;
			this->label8->Text = L"Help";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->ClientSize = System::Drawing::Size(1365, 937);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->but_NCfile);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->but_submit);
			this->Controls->Add(this->but_clear);
			this->Controls->Add(this->but_upload);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Word Cloud Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void but_submit_Click(System::Object^ sender, System::EventArgs^ e) {

		int k = System::Convert::ToInt32(numericUpDown1->Text);
		//String^ Path = System::Convert::ToString(richTextBox1->Text);
		int max = System::Convert::ToInt32(numericUpDown4->Text);
		int min = System::Convert::ToInt32(numericUpDown2->Text);
		// Call the Source function with appropriate arguments
		System::String^ result = Source(msclr::interop::marshal_as<std::string>(but_upload->Text), msclr::interop::marshal_as<std::string>(but_NCfile->Text), k, max, min, msclr::interop::marshal_as<std::string>(button2->Text));
		richTextBox1->Text = result;
	}

	private: System::Void but_upload_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			FolderBrowserDialog^ openfolderdialog1 = gcnew FolderBrowserDialog();
			openfolderdialog1->ShowDialog();
			but_upload->Text = openfolderdialog1->SelectedPath;
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void but_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		but_upload->Text = L"";
		richTextBox1->Text = L"";
		but_NCfile->Text = L"";
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
		   /*private: System::Void but_NCfile_Click_1(System::Object^ sender, System::EventArgs^ e) {
			   OpenFileDialog^ openfiledialog1 = gcnew OpenFileDialog();
			   openfiledialog1->ShowDialog();
			   but_NCfile->Text = openfiledialog1->FileName;
		   }*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ openfolderdialog1 = gcnew FolderBrowserDialog();
		openfolderdialog1->Description = "Save Output";
		openfolderdialog1->ShowDialog();
		SaveOutput(richTextBox1->Text, openfolderdialog1->SelectedPath);
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked == TRUE)
		{	OpenFileDialog^ openfiledialog1 = gcnew OpenFileDialog();
			openfiledialog1->ShowDialog();
			but_NCfile->Text = openfiledialog1->FileName;
		}
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton3->Checked == TRUE)
		{
			but_NCfile->Text = L"NotCount.txt";
		}
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void but_NCfile_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton4->Checked == TRUE)
		{
			but_NCfile->Text = " ";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ fontDialog1 = gcnew OpenFileDialog();
		fontDialog1->ShowDialog();
		button2->Text = fontDialog1->FileName;

	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox2->Text = L"1.Select directory that you want to generate cloud.\n2.Select one out of three option related to use cases.\n3.Enter K number of word that will appers in picture.\n4.Selcect min and max degree.\n5.Select Font.ttf type that type of font style will apeer in word cloud.\n6.Submit";
	}
};
}