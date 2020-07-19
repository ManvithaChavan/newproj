#pragma once
#include<iostream>
#include<string>
#include<string.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include"Header.h"


namespace fsproj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:


	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DateTimePicker^ date2;


	private: System::Windows::Forms::TextBox^ pid2;

	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListView^ listView1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ time2;
	private: System::Windows::Forms::ComboBox^ merd2;
	private: System::Windows::Forms::ComboBox^ showdoc;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ docn2;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ docn;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ time;
	private: System::Windows::Forms::ComboBox^ merd;


	private: System::Windows::Forms::DateTimePicker^ date;

	private: System::Windows::Forms::TextBox^ pid;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;



	protected:







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->docn2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->time2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->merd2 = (gcnew System::Windows::Forms::ComboBox());
			this->date2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pid2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->showdoc = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->docn = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->time = (gcnew System::Windows::Forms::DateTimePicker());
			this->merd = (gcnew System::Windows::Forms::ComboBox());
			this->date = (gcnew System::Windows::Forms::DateTimePicker());
			this->pid = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(648, 526);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 52);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Show";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->docn2);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->time2);
			this->groupBox2->Controls->Add(this->merd2);
			this->groupBox2->Controls->Add(this->date2);
			this->groupBox2->Controls->Add(this->pid2);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(49, 325);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(441, 275);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Cardiology";
			// 
			// docn2
			// 
			this->docn2->FormattingEnabled = true;
			this->docn2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Dr.Manisha", L"Dr.Suresh", L"Dr.Manu", L"Dr.Manith" });
			this->docn2->Location = System::Drawing::Point(151, 82);
			this->docn2->Name = L"docn2";
			this->docn2->Size = System::Drawing::Size(240, 44);
			this->docn2->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 90);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(119, 36);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Doctor :";
			// 
			// time2
			// 
			this->time2->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->time2->CustomFormat = L"hh:mm";
			this->time2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->time2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->time2->Location = System::Drawing::Point(151, 165);
			this->time2->Name = L"time2";
			this->time2->Size = System::Drawing::Size(98, 41);
			this->time2->TabIndex = 25;
			// 
			// merd2
			// 
			this->merd2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"AM", L"PM" });
			this->merd2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->merd2->FormattingEnabled = true;
			this->merd2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->merd2->Location = System::Drawing::Point(255, 162);
			this->merd2->Name = L"merd2";
			this->merd2->Size = System::Drawing::Size(72, 44);
			this->merd2->TabIndex = 23;
			// 
			// date2
			// 
			this->date2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date2->Location = System::Drawing::Point(151, 126);
			this->date2->MaxDate = System::DateTime(2020, 5, 16, 7, 2, 19, 306);
			this->date2->MinDate = this->date2->Value;
			this->date2->Name = L"date2";
			this->date2->Size = System::Drawing::Size(246, 41);
			this->date2->TabIndex = 6;
			this->date2->Value = System::DateTime(2020, 5, 16, 7, 2, 19, 306);
			// 
			// pid2
			// 
			this->pid2->Location = System::Drawing::Point(151, 36);
			this->pid2->Name = L"pid2";
			this->pid2->Size = System::Drawing::Size(192, 41);
			this->pid2->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(127, 214);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(139, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Book";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 36);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Time";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 36);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(156, 36);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Patient_id:";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(545, 26);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(726, 404);
			this->listView1->TabIndex = 21;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Date";
			this->columnHeader1->Width = 105;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Time";
			this->columnHeader2->Width = 103;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"...";
			this->columnHeader3->Width = 37;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Doctor";
			this->columnHeader4->Width = 155;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Patient ID";
			this->columnHeader5->Width = 420;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(516, 456);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 36);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Doctors:";
			// 
			// showdoc
			// 
			this->showdoc->FormattingEnabled = true;
			this->showdoc->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Dr.Mansi", L"Dr.Prabhu", L"Dr.Lakshmi", L"Dr.Nitesh",
					L"Dr.Manisha", L"Dr.Suresh", L"Dr.Manu", L"Dr.Manith"
			});
			this->showdoc->Location = System::Drawing::Point(648, 456);
			this->showdoc->Name = L"showdoc";
			this->showdoc->Size = System::Drawing::Size(240, 44);
			this->showdoc->TabIndex = 22;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->docn);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->time);
			this->groupBox1->Controls->Add(this->merd);
			this->groupBox1->Controls->Add(this->date);
			this->groupBox1->Controls->Add(this->pid);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Location = System::Drawing::Point(49, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(441, 275);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Neurology";
			// 
			// docn
			// 
			this->docn->FormattingEnabled = true;
			this->docn->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Dr.Mansi", L"Dr.Prabhu", L"Dr.Lakshmi", L"Dr.Nitesh" });
			this->docn->Location = System::Drawing::Point(151, 82);
			this->docn->Name = L"docn";
			this->docn->Size = System::Drawing::Size(240, 44);
			this->docn->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 90);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 36);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Doctor :";
			// 
			// time
			// 
			this->time->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->time->CustomFormat = L"hh:mm";
			this->time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->time->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->time->Location = System::Drawing::Point(151, 165);
			this->time->Name = L"time";
			this->time->Size = System::Drawing::Size(98, 41);
			this->time->TabIndex = 25;
			// 
			// merd
			// 
			this->merd->AccessibleDescription = L"Select";
			this->merd->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"AM", L"PM" });
			this->merd->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->merd->FormattingEnabled = true;
			this->merd->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->merd->Location = System::Drawing::Point(255, 162);
			this->merd->Name = L"merd";
			this->merd->Size = System::Drawing::Size(72, 44);
			this->merd->TabIndex = 23;
			// 
			// date
			// 
			this->date->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date->Location = System::Drawing::Point(151, 126);
			this->date->MaxDate = System::DateTime(2020, 5, 16, 7, 2, 19, 399);
			this->date->MinDate = this->date->Value;
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(246, 41);
			this->date->TabIndex = 6;
			this->date->Value = System::DateTime(2020, 5, 16, 7, 2, 19, 399);
			// 
			// pid
			// 
			this->pid->Location = System::Drawing::Point(151, 36);
			this->pid->Name = L"pid";
			this->pid->Size = System::Drawing::Size(192, 41);
			this->pid->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(127, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Book";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 165);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 36);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Time";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(32, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 36);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Date";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(156, 36);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Patient_id:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1113, 526);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 52);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(925, 456);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(140, 52);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Neurology dept list";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(925, 528);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 52);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Cardiology dept list";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 36);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 733);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->showdoc);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	appoint p;
	if (pid2->Text == "" || docn2->Text == "" || time2->Text == "" || merd2->Text == "")
	{
		MessageBox::Show("Check if all values are entered", "Error");
		return;
	}
	msclr::interop::marshal_context con;
	p.pid = con.marshal_as<std::string>(pid2->Text);
	p.doc = con.marshal_as<std::string>(docn2->Text);
	p.date = con.marshal_as<std::string>(date2->Text);
	p.time = con.marshal_as<std::string>(time2->Text);
	p.mer = con.marshal_as<std::string>(merd2->Text);
	input(p);
	pid2->Text = ""; docn2->Text = ""; merd2->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	appoint p;
	if (pid->Text == "" || docn->Text == "" || time->Text == "" || merd->Text == "")
	{
		MessageBox::Show("Check if all values are entered", "Error");
		return;
	}
	msclr::interop::marshal_context con;
	p.pid = con.marshal_as<std::string>(pid->Text);
	p.doc = con.marshal_as<std::string>(docn->Text);
	p.date = con.marshal_as<std::string>(date->Text);
	p.time = con.marshal_as<std::string>(time->Text);
	p.mer = con.marshal_as<std::string>(merd->Text);
	input(p);
	pid->Text = ""; docn->Text = ""; merd->Text = "";
}


private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	string dept = "Neurology";
	k_merge(dept);
	display("222.txt");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	string dept = "Cardiology";
	k_merge(dept);
	display("222.txt");
	
}
	private: void display(string fn)
	{
		try
		{
			listView1->Items->Clear();
			msclr::interop::marshal_context con;
			string doc;
			StreamReader^ r = File::OpenText(gcnew String(fn.c_str()));
			appoint s2;
			string st[100];
			for (int i = 0; i < 100; i++)
			{
				st[i] = "";
			}
			int i = 0;
			String^ sf;
			while ((sf = r->ReadLine()) != nullptr)
			{
				doc = doc = con.marshal_as<string>(sf);
				vector<string> res = splitStrings(doc, '|');
				s2.date = res[0];
				s2.mer = res[1];
				s2.time = res[2];
				s2.doc = res[3];
				s2.pid = res[4];
				ListViewItem^ dis = gcnew ListViewItem(gcnew String((s2.date).c_str()));
				dis->SubItems->Add(gcnew String((s2.time).c_str()));
				dis->SubItems->Add(gcnew String((s2.mer).c_str()));
				dis->SubItems->Add(gcnew String((s2.doc).c_str()));
				dis->SubItems->Add(gcnew String(s2.pid.c_str()));
				listView1->Items->Add(dis);
			}
			r->Close();
		}
		catch (...)
		{
			MessageBox::Show("No appointments currently,Please check the file...", "Error");
			return;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string doc;
	msclr::interop::marshal_context con;
	if (showdoc->Text == "")
	{
		MessageBox::Show("Select a doctor", "Error");
		return;
	}
	else {
		String^ fn = showdoc->Text + ".txt";
		string fs = con.marshal_as<string>(fn);
		display(fs);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
