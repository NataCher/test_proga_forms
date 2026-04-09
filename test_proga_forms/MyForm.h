#pragma once

namespace testprogaforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Label^ lbl_1;
	protected:


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ lbl_result;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_plus_minus;
	private: System::Windows::Forms::Button^ btn_procent;
	private: System::Windows::Forms::Button^ btn_slash;
	private: System::Windows::Forms::Button^ btn_ymno;





	private: System::Windows::Forms::Button^ btn_9;

	private: System::Windows::Forms::Button^ btn_8;

	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_minus;


	private: System::Windows::Forms::Button^ btn_6;

	private: System::Windows::Forms::Button^ btn_5;

	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_plus;


	private: System::Windows::Forms::Button^ btn_3;

	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_11;
	private: System::Windows::Forms::Button^ btn_ravno;



	private: System::Windows::Forms::Button^ btn_dot;



	private: System::Windows::Forms::Button^ btn_zero;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->lbl_1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->lbl_result = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_plus_minus = (gcnew System::Windows::Forms::Button());
			this->btn_procent = (gcnew System::Windows::Forms::Button());
			this->btn_slash = (gcnew System::Windows::Forms::Button());
			this->btn_ymno = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_11 = (gcnew System::Windows::Forms::Button());
			this->btn_ravno = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->btn_zero = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_1
			// 
			this->btn_1->Location = System::Drawing::Point(91, 104);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(368, 88);
			this->btn_1->TabIndex = 0;
			this->btn_1->Text = L"Нажми меня";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// lbl_1
			// 
			this->lbl_1->AutoSize = true;
			this->lbl_1->Location = System::Drawing::Point(87, 52);
			this->lbl_1->Name = L"lbl_1";
			this->lbl_1->Size = System::Drawing::Size(112, 20);
			this->lbl_1->TabIndex = 1;
			this->lbl_1->Text = L"Просто текст";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(91, 235);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(104, 24);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"checkBox";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(91, 278);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 24);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(239, 233);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(220, 26);
			this->textBox->TabIndex = 4;
			this->textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::Brown;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn_exit->Location = System::Drawing::Point(825, 39);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(41, 42);
			this->btn_exit->TabIndex = 5;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// lbl_result
			// 
			this->lbl_result->Font = (gcnew System::Drawing::Font(L"Rockwell", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_result->Location = System::Drawing::Point(927, 39);
			this->lbl_result->Name = L"lbl_result";
			this->lbl_result->Size = System::Drawing::Size(300, 55);
			this->lbl_result->TabIndex = 6;
			this->lbl_result->Text = L"0";
			this->lbl_result->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->lbl_result->UseWaitCursor = true;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_ac->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btn_ac->Location = System::Drawing::Point(825, 127);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(96, 81);
			this->btn_ac->TabIndex = 7;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_plus_minus
			// 
			this->btn_plus_minus->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_plus_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_plus_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus_minus->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btn_plus_minus->Location = System::Drawing::Point(927, 127);
			this->btn_plus_minus->Name = L"btn_plus_minus";
			this->btn_plus_minus->Size = System::Drawing::Size(96, 81);
			this->btn_plus_minus->TabIndex = 8;
			this->btn_plus_minus->Text = L"+/-";
			this->btn_plus_minus->UseVisualStyleBackColor = false;
			this->btn_plus_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_minus_Click);
			// 
			// btn_procent
			// 
			this->btn_procent->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn_procent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_procent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_procent->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btn_procent->Location = System::Drawing::Point(1029, 127);
			this->btn_procent->Name = L"btn_procent";
			this->btn_procent->Size = System::Drawing::Size(96, 81);
			this->btn_procent->TabIndex = 9;
			this->btn_procent->Text = L"%";
			this->btn_procent->UseVisualStyleBackColor = false;
			this->btn_procent->Click += gcnew System::EventHandler(this, &MyForm::btn_procent_Click);
			// 
			// btn_slash
			// 
			this->btn_slash->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->btn_slash->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_slash->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_slash->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_slash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_slash->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_slash->Location = System::Drawing::Point(1131, 127);
			this->btn_slash->Name = L"btn_slash";
			this->btn_slash->Size = System::Drawing::Size(96, 81);
			this->btn_slash->TabIndex = 10;
			this->btn_slash->Text = L"/";
			this->btn_slash->UseVisualStyleBackColor = false;
			// 
			// btn_ymno
			// 
			this->btn_ymno->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_ymno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ymno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ymno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ymno->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_ymno->Location = System::Drawing::Point(1131, 221);
			this->btn_ymno->Name = L"btn_ymno";
			this->btn_ymno->Size = System::Drawing::Size(96, 81);
			this->btn_ymno->TabIndex = 14;
			this->btn_ymno->Text = L"*";
			this->btn_ymno->UseVisualStyleBackColor = false;
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_9->Location = System::Drawing::Point(1029, 221);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(96, 81);
			this->btn_9->TabIndex = 13;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_8->Location = System::Drawing::Point(927, 221);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(96, 81);
			this->btn_8->TabIndex = 12;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_7->Location = System::Drawing::Point(825, 221);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(96, 81);
			this->btn_7->TabIndex = 11;
			this->btn_7->Tag = L"";
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_minus->Location = System::Drawing::Point(1131, 317);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(96, 81);
			this->btn_minus->TabIndex = 18;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_6->Location = System::Drawing::Point(1029, 317);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(96, 81);
			this->btn_6->TabIndex = 17;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_5->Location = System::Drawing::Point(927, 317);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(96, 81);
			this->btn_5->TabIndex = 16;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_4->Location = System::Drawing::Point(825, 317);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(96, 81);
			this->btn_4->TabIndex = 15;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_plus->Location = System::Drawing::Point(1131, 415);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(96, 81);
			this->btn_plus->TabIndex = 22;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_3->Location = System::Drawing::Point(1029, 415);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(96, 81);
			this->btn_3->TabIndex = 21;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_2->Location = System::Drawing::Point(927, 415);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(96, 81);
			this->btn_2->TabIndex = 20;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			// 
			// btn_11
			// 
			this->btn_11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_11->Location = System::Drawing::Point(825, 415);
			this->btn_11->Name = L"btn_11";
			this->btn_11->Size = System::Drawing::Size(96, 81);
			this->btn_11->TabIndex = 19;
			this->btn_11->Text = L"1";
			this->btn_11->UseVisualStyleBackColor = false;
			// 
			// btn_ravno
			// 
			this->btn_ravno->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_ravno->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ravno->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_ravno->Location = System::Drawing::Point(1131, 512);
			this->btn_ravno->Name = L"btn_ravno";
			this->btn_ravno->Size = System::Drawing::Size(96, 81);
			this->btn_ravno->TabIndex = 26;
			this->btn_ravno->Text = L"=";
			this->btn_ravno->UseVisualStyleBackColor = false;
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_dot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_dot->Location = System::Drawing::Point(1029, 512);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(96, 81);
			this->btn_dot->TabIndex = 25;
			this->btn_dot->Text = L".";
			this->btn_dot->UseVisualStyleBackColor = false;
			// 
			// btn_zero
			// 
			this->btn_zero->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btn_zero->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_zero->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_zero->Location = System::Drawing::Point(825, 512);
			this->btn_zero->Name = L"btn_zero";
			this->btn_zero->Size = System::Drawing::Size(198, 81);
			this->btn_zero->TabIndex = 23;
			this->btn_zero->Text = L"0";
			this->btn_zero->UseVisualStyleBackColor = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1285, 685);
			this->Controls->Add(this->btn_ravno);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->btn_zero);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_11);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_ymno);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_slash);
			this->Controls->Add(this->btn_procent);
			this->Controls->Add(this->btn_plus_minus);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->lbl_result);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lbl_1->Text = "SOME TEXT";
	}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked)
		this->btn_1->Width = 300;
	else 
		this->btn_1->Width = 200;
}
private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox->Text == "Blue")
		this->btn_1->BackColor = System::Drawing::Color::Blue;
	else if (this->textBox->Text == "Red")
		this->btn_1->BackColor = System::Drawing::Color::Red;
}
private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
} 
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_plus_minus_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_procent_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
