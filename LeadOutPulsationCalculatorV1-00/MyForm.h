#pragma once

namespace LeadOutPulsationCalculatorV100 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox_rotorDiameter;
	private: System::Windows::Forms::Label^  label_rotorDiameter;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_rotorDiameter = (gcnew System::Windows::Forms::TextBox());
			this->label_rotorDiameter = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 83);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 237);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox_rotorDiameter
			// 
			this->textBox_rotorDiameter->Location = System::Drawing::Point(16, 14);
			this->textBox_rotorDiameter->Name = L"textBox_rotorDiameter";
			this->textBox_rotorDiameter->Size = System::Drawing::Size(88, 20);
			this->textBox_rotorDiameter->TabIndex = 1;
			// 
			// label_rotorDiameter
			// 
			this->label_rotorDiameter->AutoSize = true;
			this->label_rotorDiameter->Location = System::Drawing::Point(110, 17);
			this->label_rotorDiameter->Name = L"label_rotorDiameter";
			this->label_rotorDiameter->Size = System::Drawing::Size(78, 13);
			this->label_rotorDiameter->TabIndex = 2;
			this->label_rotorDiameter->Text = L"Rotor Diameter";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label_rotorDiameter);
			this->Controls->Add(this->textBox_rotorDiameter);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
