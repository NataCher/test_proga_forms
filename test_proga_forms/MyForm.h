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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1456, 603);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->lbl_1);
			this->Controls->Add(this->btn_1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
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
};
}
