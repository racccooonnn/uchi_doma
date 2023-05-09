#pragma once

namespace Browser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_gotosite;
	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ btn_back;
	private: System::Windows::Forms::Button^ btn_forward;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

	private:
		String^ url_back;
		String^ url_fd;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_gotosite = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->btn_forward = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(113, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"јдрес:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btn_gotosite
			// 
			this->btn_gotosite->Location = System::Drawing::Point(887, 5);
			this->btn_gotosite->Name = L"btn_gotosite";
			this->btn_gotosite->Size = System::Drawing::Size(86, 29);
			this->btn_gotosite->TabIndex = 2;
			this->btn_gotosite->Text = L"ѕерейти";
			this->btn_gotosite->UseVisualStyleBackColor = true;
			this->btn_gotosite->Click += gcnew System::EventHandler(this, &MyForm::btn_gotosite_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(712, 22);
			this->textBox1->TabIndex = 3;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(8, 48);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(965, 468);
			this->webBrowser1->TabIndex = 4;
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(8, 5);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(49, 29);
			this->btn_back->TabIndex = 5;
			this->btn_back->Text = L"<<";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &MyForm::btn_back_Click);
			// 
			// btn_forward
			// 
			this->btn_forward->Location = System::Drawing::Point(63, 5);
			this->btn_forward->Name = L"btn_forward";
			this->btn_forward->Size = System::Drawing::Size(44, 29);
			this->btn_forward->TabIndex = 6;
			this->btn_forward->Text = L">>";
			this->btn_forward->UseVisualStyleBackColor = true;
			this->btn_forward->Click += gcnew System::EventHandler(this, &MyForm::btn_forward_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(985, 519);
			this->Controls->Add(this->btn_forward);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn_gotosite);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Browser";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_gotosite_Click(System::Object^ sender, System::EventArgs^ e) {
		this->url_back = Convert::ToString(this->webBrowser1->Url);
		this->webBrowser1->Navigate(this->textBox1->Text);
		this->Text = "Browser - " + this->textBox1->Text;
	}

private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
	this->url_fd = Convert::ToString(this->webBrowser1->Url);
	this->webBrowser1->Navigate(this->url_back);
}
private: System::Void btn_forward_Click(System::Object^ sender, System::EventArgs^ e) {
	this->url_back = Convert::ToString(this->webBrowser1->Url);
	this->webBrowser1->Navigate(this->url_fd);
}
};
}
