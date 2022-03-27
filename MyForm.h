#pragma once

namespace WebHookSpammer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Threading;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ webHookText;
	private: System::Windows::Forms::Button^ sendBtn;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ contentText;
	private: System::Windows::Forms::TextBox^ count;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label1;



	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->webHookText = (gcnew System::Windows::Forms::TextBox());
			this->sendBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->contentText = (gcnew System::Windows::Forms::TextBox());
			this->count = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// webHookText
			// 
			this->webHookText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webHookText->Location = System::Drawing::Point(3, 15);
			this->webHookText->Multiline = true;
			this->webHookText->Name = L"webHookText";
			this->webHookText->Size = System::Drawing::Size(748, 157);
			this->webHookText->TabIndex = 0;
			// 
			// sendBtn
			// 
			this->sendBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->sendBtn->Location = System::Drawing::Point(12, 364);
			this->sendBtn->Name = L"sendBtn";
			this->sendBtn->Size = System::Drawing::Size(75, 23);
			this->sendBtn->TabIndex = 1;
			this->sendBtn->Text = L"送信する";
			this->sendBtn->UseVisualStyleBackColor = true;
			this->sendBtn->Click += gcnew System::EventHandler(this, &MyForm::sendBtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->webHookText);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(754, 175);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"WebHookURLs (改行で複数)";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->contentText);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(754, 176);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"メッセージ";
			// 
			// contentText
			// 
			this->contentText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->contentText->Location = System::Drawing::Point(3, 15);
			this->contentText->Multiline = true;
			this->contentText->Name = L"contentText";
			this->contentText->Size = System::Drawing::Size(748, 158);
			this->contentText->TabIndex = 0;
			// 
			// count
			// 
			this->count->Location = System::Drawing::Point(130, 366);
			this->count->Name = L"count";
			this->count->Size = System::Drawing::Size(42, 19);
			this->count->TabIndex = 6;
			this->count->Text = L"5";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->groupBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->groupBox2);
			this->splitContainer1->Size = System::Drawing::Size(754, 355);
			this->splitContainer1->SplitterDistance = 175;
			this->splitContainer1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(93, 369);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 12);
			this->label1->TabIndex = 8;
			this->label1->Text = L"回数:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 399);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->count);
			this->Controls->Add(this->sendBtn);
			this->Name = L"MyForm";
			this->Text = L"MultiWebHookSpammer";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Icon = SystemIcons::Application;
	}
	private: 
		System::Void sendBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		auto urls = webHookText->Text->Split('\n');
		int c = 1;
		int::TryParse(count->Text, c);

		for (size_t i = 0; i < c; i++)
		{
			for each (auto url in urls)
			{
				sendWebHook(url, contentText->Text);
			}
		}

	}

		   bool sendRequest(HttpWebRequest^ req, String^& res)
		   {
			   try
			   {
				   auto resStream = req->GetResponse()->GetResponseStream();
				   auto reader = gcnew StreamReader(resStream, Encoding::UTF8);
				   if (res != L"null")
				   {
					   res = reader->ReadToEnd();
				   }
				   reader->Close();
				   resStream->Close();

				   delete reader;
				   return true;
			   }
			   catch (WebException^ we)
			   {
				   try
				   {
					   HttpWebResponse^ response = static_cast<HttpWebResponse^>(we->Response);
					   if (response == nullptr)
					   {
						   return false;
					   }
					   auto resStream = response->GetResponseStream();
					   auto reader = gcnew StreamReader(resStream, Encoding::UTF8);
					   if (res != L"null")
					   {
						   res = reader->ReadToEnd();
					   }
					   //Debug.WriteLine(response.StatusCode);
					   reader->Close();
					   resStream->Close();

					   delete reader;
					   return false;
				   }
				   catch (Exception^ e1)
				   {
					   return false;
				   }
			   }
		   }

		   bool sendWebHook(String^ url, String^ contents)
		   {
			   auto data = L"{\"content\":\"" + contents + L"\"}";
			   //Debug.WriteLine("\n" + data + "\n");
			   HttpWebRequest^ req = static_cast<HttpWebRequest^>(WebRequest::Create(url));
			   req->Method = L"POST";
			   req->KeepAlive = true;
			   req->Accept = L"*/*";
			   req->ContentType = L"application/json";
			   req->ContentLength = Encoding::UTF8->GetByteCount(data);
			   auto reqStream = req->GetRequestStream();
			   auto writer = gcnew StreamWriter(reqStream);
			   writer->Write(data);
			   writer->Close();
			   reqStream->Close();
			   String^ str = L"";
			   delete writer;
			   return sendRequest(req, str);
		   }
	};
}
