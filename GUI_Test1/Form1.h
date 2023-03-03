#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_OK;
	protected:
	private: System::Windows::Forms::TextBox^ text_HelloWelt;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_OK = (gcnew System::Windows::Forms::Button());
			this->text_HelloWelt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_OK
			// 
			this->btn_OK->Location = System::Drawing::Point(109, 156);
			this->btn_OK->Name = L"btn_OK";
			this->btn_OK->Size = System::Drawing::Size(234, 117);
			this->btn_OK->TabIndex = 0;
			this->btn_OK->Text = L"OK";
			this->btn_OK->UseVisualStyleBackColor = true;
			this->btn_OK->Click += gcnew System::EventHandler(this, &Form1::btn_OK_Click);
			// 
			// text_HelloWelt
			// 
			this->text_HelloWelt->Location = System::Drawing::Point(109, 70);
			this->text_HelloWelt->Name = L"text_HelloWelt";
			this->text_HelloWelt->Size = System::Drawing::Size(234, 20);
			this->text_HelloWelt->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(494, 411);
			this->Controls->Add(this->text_HelloWelt);
			this->Controls->Add(this->btn_OK);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_OK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->text_HelloWelt->Text = "Hello Welt";
	}
	};
}
