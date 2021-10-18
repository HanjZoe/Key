#pragma once

namespace йцук {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	protected:














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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(192, 181);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Form_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Form_KeyPress);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Form_KeyUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Text = "Какие клавиши сейчас нажаты:";
		label1->Text = String::Empty;
		label2->Text = String::Empty;
	
	}
private: System::Void Form_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	label1->Text = "Нажатая клавиша: " + e->KeyChar;
}
private: System::Void Form_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	label2->Text = String::Empty;

	if (e->Alt == true) label2->Text += "Alt: Yes\n";
	else label2->Text += "Alt: No\n";
	if (e->Shift == true) label2->Text += "Shift: Yes\n";
	else label2->Text += "Shift: No\n";
	if (e->Control == true) label2->Text += "Ctrl: Yes\n";
	else label2->Text += "Ctrl: No\n";
	label2->Text += String::Format(
		"Код клавиши: {0} \n KeyData: {1} \n KeyValue: {2}",
		e->KeyCode, e->KeyData, e->KeyValue);
}
private: System::Void Form_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
}
};
}
