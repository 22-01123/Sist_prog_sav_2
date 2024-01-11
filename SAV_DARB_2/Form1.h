#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

		   namespace CppCLRWinFormsProject {

			   using namespace System;
			   using namespace System::ComponentModel;
			   using namespace System::Collections;
			   using namespace System::Windows::Forms;
			   using namespace System::Data;
			   using namespace System::Drawing;
			   using namespace System::Runtime::InteropServices;

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





			   private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
			   private: System::Windows::Forms::Button^ button1;
			   private: System::Windows::Forms::TextBox^ textBox1;
			   private: System::Windows::Forms::MenuStrip^ menuStrip1;
			   private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
			   private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
			   private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
			   private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
			   private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
			   private: System::Windows::Forms::RadioButton^ radioButton1;
			   private: System::Windows::Forms::RadioButton^ radioButton2;
			   private: System::Windows::Forms::TextBox^ textBox2;
			   private: System::Windows::Forms::TextBox^ textBox3;
			   private: System::Windows::Forms::TextBox^ textBox4;


			   private: System::Windows::Forms::Button^ button2;
			   private: System::Windows::Forms::Label^ label1;
			   private: System::Windows::Forms::Button^ button3;
			   private: System::Windows::Forms::Button^ button4;
			   private: System::Windows::Forms::Button^ button5;
			   private: System::Windows::Forms::Button^ button6;
			   private: System::Windows::Forms::Button^ button7;
			   private: System::Windows::Forms::Button^ button8;
			   private: System::Windows::Forms::Label^ label2;
			   private: System::Windows::Forms::Label^ label3;
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
					   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
					   this->button1 = (gcnew System::Windows::Forms::Button());
					   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
					   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
					   this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					   this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					   this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					   this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					   this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
					   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
					   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
					   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
					   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
					   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
					   this->button2 = (gcnew System::Windows::Forms::Button());
					   this->label1 = (gcnew System::Windows::Forms::Label());
					   this->button3 = (gcnew System::Windows::Forms::Button());
					   this->button4 = (gcnew System::Windows::Forms::Button());
					   this->button5 = (gcnew System::Windows::Forms::Button());
					   this->button6 = (gcnew System::Windows::Forms::Button());
					   this->button7 = (gcnew System::Windows::Forms::Button());
					   this->button8 = (gcnew System::Windows::Forms::Button());
					   this->label2 = (gcnew System::Windows::Forms::Label());
					   this->label3 = (gcnew System::Windows::Forms::Label());
					   this->menuStrip1->SuspendLayout();
					   this->SuspendLayout();
					   // 
					   // saveFileDialog1
					   // 
					   this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::saveFileDialog1_FileOk);
					   // 
					   // button1
					   // 
					   this->button1->Location = System::Drawing::Point(482, 103);
					   this->button1->Name = L"button1";
					   this->button1->Size = System::Drawing::Size(116, 25);
					   this->button1->TabIndex = 5;
					   this->button1->Text = L"Generate";
					   this->button1->UseVisualStyleBackColor = true;
					   this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
					   // 
					   // textBox1
					   // 
					   this->textBox1->Location = System::Drawing::Point(482, 64);
					   this->textBox1->Multiline = true;
					   this->textBox1->Name = L"textBox1";
					   this->textBox1->Size = System::Drawing::Size(116, 33);
					   this->textBox1->TabIndex = 6;
					   this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
					   // 
					   // menuStrip1
					   // 
					   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
						   this->fileToolStripMenuItem,
							   this->aboutToolStripMenuItem
					   });
					   this->menuStrip1->Location = System::Drawing::Point(0, 0);
					   this->menuStrip1->Name = L"menuStrip1";
					   this->menuStrip1->Size = System::Drawing::Size(1032, 24);
					   this->menuStrip1->TabIndex = 7;
					   this->menuStrip1->Text = L"menuStrip1";
					   // 
					   // fileToolStripMenuItem
					   // 
					   this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
						   this->openToolStripMenuItem,
							   this->saveAsToolStripMenuItem, this->saveToolStripMenuItem
					   });
					   this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
					   this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
					   this->fileToolStripMenuItem->Text = L"File";
					   // 
					   // openToolStripMenuItem
					   // 
					   this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
					   this->openToolStripMenuItem->Size = System::Drawing::Size(114, 22);
					   this->openToolStripMenuItem->Text = L"Open";
					   this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
					   // 
					   // saveAsToolStripMenuItem
					   // 
					   this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
					   this->saveAsToolStripMenuItem->Size = System::Drawing::Size(114, 22);
					   this->saveAsToolStripMenuItem->Text = L"Save As";
					   this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
					   // 
					   // saveToolStripMenuItem
					   // 
					   this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
					   this->saveToolStripMenuItem->Size = System::Drawing::Size(114, 22);
					   this->saveToolStripMenuItem->Text = L"Save";
					   // 
					   // aboutToolStripMenuItem
					   // 
					   this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
					   this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
					   this->aboutToolStripMenuItem->Text = L"About";
					   this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
					   // 
					   // radioButton1
					   // 
					   this->radioButton1->AutoSize = true;
					   this->radioButton1->Location = System::Drawing::Point(539, 157);
					   this->radioButton1->Name = L"radioButton1";
					   this->radioButton1->Size = System::Drawing::Size(65, 17);
					   this->radioButton1->TabIndex = 8;
					   this->radioButton1->TabStop = true;
					   this->radioButton1->Text = L"Avarage";
					   this->radioButton1->UseVisualStyleBackColor = true;
					   this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
					   // 
					   // radioButton2
					   // 
					   this->radioButton2->AutoSize = true;
					   this->radioButton2->Location = System::Drawing::Point(473, 157);
					   this->radioButton2->Name = L"radioButton2";
					   this->radioButton2->Size = System::Drawing::Size(60, 17);
					   this->radioButton2->TabIndex = 9;
					   this->radioButton2->TabStop = true;
					   this->radioButton2->Text = L"Median";
					   this->radioButton2->UseVisualStyleBackColor = true;
					   this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
					   // 
					   // textBox2
					   // 
					   this->textBox2->Location = System::Drawing::Point(12, 64);
					   this->textBox2->Multiline = true;
					   this->textBox2->Name = L"textBox2";
					   this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
					   this->textBox2->Size = System::Drawing::Size(455, 493);
					   this->textBox2->TabIndex = 10;
					   this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
					   // 
					   // textBox3
					   // 
					   this->textBox3->Location = System::Drawing::Point(604, 64);
					   this->textBox3->Multiline = true;
					   this->textBox3->Name = L"textBox3";
					   this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
					   this->textBox3->Size = System::Drawing::Size(416, 224);
					   this->textBox3->TabIndex = 11;
					   this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
					   // 
					   // textBox4
					   // 
					   this->textBox4->Location = System::Drawing::Point(604, 337);
					   this->textBox4->Multiline = true;
					   this->textBox4->Name = L"textBox4";
					   this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Both;
					   this->textBox4->Size = System::Drawing::Size(416, 220);
					   this->textBox4->TabIndex = 12;
					   this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
					   // 
					   // button2
					   // 
					   this->button2->Location = System::Drawing::Point(482, 192);
					   this->button2->Name = L"button2";
					   this->button2->Size = System::Drawing::Size(116, 51);
					   this->button2->TabIndex = 15;
					   this->button2->Text = L"Split into Stronger and Weaker students";
					   this->button2->UseVisualStyleBackColor = true;
					   this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
					   // 
					   // label1
					   // 
					   this->label1->Location = System::Drawing::Point(482, 35);
					   this->label1->Name = L"label1";
					   this->label1->Size = System::Drawing::Size(116, 26);
					   this->label1->TabIndex = 16;
					   this->label1->Text = L"Type in quantity of students to generate";
					   // 
					   // button3
					   // 
					   this->button3->Location = System::Drawing::Point(12, 38);
					   this->button3->Name = L"button3";
					   this->button3->Size = System::Drawing::Size(75, 23);
					   this->button3->TabIndex = 17;
					   this->button3->Text = L"Save";
					   this->button3->UseVisualStyleBackColor = true;
					   this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
					   // 
					   // button4
					   // 
					   this->button4->Location = System::Drawing::Point(93, 38);
					   this->button4->Name = L"button4";
					   this->button4->Size = System::Drawing::Size(75, 23);
					   this->button4->TabIndex = 18;
					   this->button4->Text = L"Save As";
					   this->button4->UseVisualStyleBackColor = true;
					   this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
					   // 
					   // button5
					   // 
					   this->button5->Location = System::Drawing::Point(604, 38);
					   this->button5->Name = L"button5";
					   this->button5->Size = System::Drawing::Size(75, 23);
					   this->button5->TabIndex = 19;
					   this->button5->Text = L"Save";
					   this->button5->UseVisualStyleBackColor = true;
					   this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
					   // 
					   // button6
					   // 
					   this->button6->Location = System::Drawing::Point(685, 38);
					   this->button6->Name = L"button6";
					   this->button6->Size = System::Drawing::Size(75, 23);
					   this->button6->TabIndex = 20;
					   this->button6->Text = L"Save As";
					   this->button6->UseVisualStyleBackColor = true;
					   this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
					   // 
					   // button7
					   // 
					   this->button7->Location = System::Drawing::Point(604, 308);
					   this->button7->Name = L"button7";
					   this->button7->Size = System::Drawing::Size(75, 23);
					   this->button7->TabIndex = 21;
					   this->button7->Text = L"Save";
					   this->button7->UseVisualStyleBackColor = true;
					   this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
					   // 
					   // button8
					   // 
					   this->button8->Location = System::Drawing::Point(685, 308);
					   this->button8->Name = L"button8";
					   this->button8->Size = System::Drawing::Size(75, 23);
					   this->button8->TabIndex = 22;
					   this->button8->Text = L"Save As";
					   this->button8->UseVisualStyleBackColor = true;
					   this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
					   // 
					   // label2
					   // 
					   this->label2->AutoSize = true;
					   this->label2->Location = System::Drawing::Point(766, 43);
					   this->label2->Name = L"label2";
					   this->label2->Size = System::Drawing::Size(36, 13);
					   this->label2->TabIndex = 23;
					   this->label2->Text = L"Weak";
					   // 
					   // label3
					   // 
					   this->label3->AutoSize = true;
					   this->label3->Location = System::Drawing::Point(766, 313);
					   this->label3->Name = L"label3";
					   this->label3->Size = System::Drawing::Size(38, 13);
					   this->label3->TabIndex = 24;
					   this->label3->Text = L"Strong";
					   // 
					   // Form1
					   // 
					   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
					   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					   this->ClientSize = System::Drawing::Size(1032, 569);
					   this->Controls->Add(this->label3);
					   this->Controls->Add(this->label2);
					   this->Controls->Add(this->button8);
					   this->Controls->Add(this->button7);
					   this->Controls->Add(this->button6);
					   this->Controls->Add(this->button5);
					   this->Controls->Add(this->button4);
					   this->Controls->Add(this->button3);
					   this->Controls->Add(this->label1);
					   this->Controls->Add(this->button2);
					   this->Controls->Add(this->textBox4);
					   this->Controls->Add(this->textBox3);
					   this->Controls->Add(this->textBox2);
					   this->Controls->Add(this->radioButton2);
					   this->Controls->Add(this->radioButton1);
					   this->Controls->Add(this->textBox1);
					   this->Controls->Add(this->button1);
					   this->Controls->Add(this->menuStrip1);
					   this->MainMenuStrip = this->menuStrip1;
					   this->Name = L"Form1";
					   this->Text = L"Form1";
					   this->menuStrip1->ResumeLayout(false);
					   this->menuStrip1->PerformLayout();
					   this->ResumeLayout(false);
					   this->PerformLayout();

				   }
#pragma endregion
			   private:
				   int generateRandomGrade();
			   private:
				   String^ savedFilePath;
				   System::Void Form1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
					   int numStudents = 0;

					   try {
						   numStudents = Convert::ToInt32(textBox1->Text);
					   }
					   catch (FormatException^) {
						   MessageBox::Show("Please enter a valid number of students.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   return;
					   }

					   
					   String^ sourceFilePath = gcnew String(__FILE__);
					   String^ sourceFileDirectory = System::IO::Path::GetDirectoryName(sourceFilePath);


					   String^ filePath = System::IO::Path::Combine(sourceFileDirectory, "students.txt");


					   IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(filePath);
					   const char* nativeString = static_cast<const char*>(ptrToNativeString.ToPointer());

					   std::ofstream outputFile(nativeString);


					   Marshal::FreeHGlobal(ptrToNativeString);

					   if (!outputFile) {
						   MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   return;
					   }

					   outputFile << "Student Number Grade1 Grade2 Grade3 Grade4 Grade5 ExamGrade" << std::endl;

					   for (int i = 1; i <= numStudents; ++i) {
						   outputFile << "student" << i << " ";
						   for (int j = 0; j < 5; ++j) {
							   outputFile << generateRandomGrade() << " ";
						   }
						   outputFile << generateRandomGrade() << std::endl;
					   }


					   outputFile.close();

					   MessageBox::Show("Data written to students.txt successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   }
			   private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				   OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
				   openFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
				   openFileDialog->FilterIndex = 1;

				   String^ sourceFilePath = gcnew String(__FILE__);
				   String^ sourceFileDirectory = System::IO::Path::GetDirectoryName(sourceFilePath);
				   openFileDialog->InitialDirectory = sourceFileDirectory;

				   if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					   String^ filePath = openFileDialog->FileName;

					   const char* nativeFilePath = (const char*)(Marshal::StringToHGlobalAnsi(filePath)).ToPointer();

					   std::ifstream inputFile(nativeFilePath);


					   Marshal::FreeHGlobal(IntPtr((void*)nativeFilePath));

					   if (!inputFile) {
						   MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   return;
					   }


					   String^ fileContent = gcnew String("");

					   while (!inputFile.eof()) {
						   std::string line;
						   std::getline(inputFile, line);


						   fileContent += gcnew String(line.c_str()) + "\r\n";
					   }

					   textBox2->Text = fileContent;

					   inputFile.close();
				   }
			   }

			   private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
			   }
			   private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
				   saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
				   saveFileDialog->FilterIndex = 1;

				   if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					   String^ filePath = saveFileDialog->FileName;

					   const char* nativeFilePath = (const char*)(Marshal::StringToHGlobalAnsi(filePath)).ToPointer();

					   std::ofstream outputFile(nativeFilePath);

					   Marshal::FreeHGlobal(IntPtr((void*)nativeFilePath));

					   if (!outputFile) {
						   MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   return;
					   }

					   String^ contentToSave = "Sample content to save.";

					   const char* nativeContent = (const char*)(Marshal::StringToHGlobalAnsi(contentToSave)).ToPointer();

					   outputFile << nativeContent << std::endl;

					   Marshal::FreeHGlobal(IntPtr((void*)nativeContent));

					   outputFile.close();

					   MessageBox::Show("File saved successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				   }
			   }

			   private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

				   if (String::IsNullOrEmpty(savedFilePath)) {

					   SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
					   saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
					   saveFileDialog->FilterIndex = 1;

					   if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
						   savedFilePath = saveFileDialog->FileName;
					   }
					   else {

						   return;
					   }
				   }


				   const char* nativeFilePath = (const char*)(Marshal::StringToHGlobalAnsi(savedFilePath)).ToPointer();


				   std::ofstream outputFile(nativeFilePath);

				   Marshal::FreeHGlobal(IntPtr((void*)nativeFilePath));

				   if (!outputFile) {
					   MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return;
				   }

				   String^ contentToSave = "Sample content to save.";

				   const char* nativeContent = (const char*)(Marshal::StringToHGlobalAnsi(contentToSave)).ToPointer();

				   outputFile << nativeContent << std::endl;

				   Marshal::FreeHGlobal(IntPtr((void*)nativeContent));

				   outputFile.close();

				   MessageBox::Show("File saved successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			   private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				   String^ aboutMessage = "Sist Prog Sav 2 v1.0\nMade by Daniel Tolstik";
				   MessageBox::Show(aboutMessage, "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			   private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			   }
			   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
				   // Get the content from textBox2
				   String^ fileContent = textBox2->Text;

				   // Split the content into lines
				   array<String^>^ lines = fileContent->Split(gcnew array<Char>{'\n'}, StringSplitOptions::RemoveEmptyEntries);

				   // Variables to store the calculated results
				   String^ belowFive = "Student Number Grade1 Grade2 Grade3 Grade4 Grade5 ExamGrade Result\r\n";
				   String^ equalOrAboveFive = "Student Number Grade1 Grade2 Grade3 Grade4 Grade5 ExamGrade Result\r\n";

				   // Determine if the average or median should be calculated
				   bool calculateAverage = radioButton1->Checked;
				   bool calculateMedian = radioButton2->Checked;

				   // Loop through each line and calculate average/median
				   for (int i = 1; i < lines->Length; ++i) {  // Start from 1 to skip the first line
					   String^ line = lines[i];
					   array<String^>^ grades = line->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);

					   if (grades->Length >= 6) {
						   // Calculate average or median (assuming grades are at indices 1 to 5)
						   double result = 0;
						   if (calculateAverage) {
							   for (int j = 1; j <= 5; ++j) {
								   result += Convert::ToDouble(grades[j]);
							   }
							   result /= 5;
						   }
						   else if (calculateMedian) {
							   array<double>^ gradeValues = gcnew array<double>(5);
							   for (int j = 1; j <= 5; ++j) {
								   gradeValues[j - 1] = Convert::ToDouble(grades[j]);
							   }
							   Array::Sort(gradeValues);
							   result = (gradeValues[2] + gradeValues[3]) / 2;
						   }

						   // Add the result to the line
						   String^ resultText = result.ToString("F2"); // Format result to two decimal places
						   line += " " + resultText;

						   // Determine if the result is below 5 or equal/above 5
						   if (result < 5) {
							   belowFive += line + "\r\n";
						   }
						   else {
							   equalOrAboveFive += line + "\r\n";
						   }
					   }
				   }

				   // Display the results in textBox3 and textBox4
				   textBox3->Text = belowFive;
				   textBox4->Text = equalOrAboveFive;
			   }

			   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveToFile(textBox2);
			   }
			   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveAsToFile(textBox2);
			   }
			   private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveToFile(textBox3);
			   }

			   private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveAsToFile(textBox3);
			   }

			   private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveToFile(textBox4);
			   }

			   private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
				   SaveAsToFile(textBox4);
			   }
			   private: void SaveToFile(TextBox^ textBox) {
				   if (String::IsNullOrEmpty(savedFilePath)) {
					   SaveAsToFile(textBox);
				   }
				   else {
					   SaveContentToFile(textBox, savedFilePath);
				   }
			   }
			   private: void SaveAsToFile(TextBox^ textBox) {
				   SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
				   saveFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
				   saveFileDialog->FilterIndex = 1;

				   if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					   String^ filePath = saveFileDialog->FileName;
					   SaveContentToFile(textBox, filePath);
					   savedFilePath = filePath;
				   }
			   }
			   private: void SaveContentToFile(TextBox^ textBox, String^ filePath) {
				   const char* nativeFilePath = (const char*)(Marshal::StringToHGlobalAnsi(filePath)).ToPointer();
				   std::ofstream outputFile(nativeFilePath);
				   Marshal::FreeHGlobal(IntPtr((void*)nativeFilePath));

				   if (!outputFile) {
					   MessageBox::Show("Error opening the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return;
				   }

				   String^ contentToSave = textBox->Text;
				   const char* nativeContent = (const char*)(Marshal::StringToHGlobalAnsi(contentToSave)).ToPointer();
				   outputFile << nativeContent << std::endl;
				   Marshal::FreeHGlobal(IntPtr((void*)nativeContent));
				   outputFile.close();

				   MessageBox::Show("File saved successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
			};
};
		   