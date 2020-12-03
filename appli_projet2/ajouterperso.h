#pragma once
#include "iostream"
#include "afficherperso.h"

namespace  CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace System::Media;
	using namespace System::Threading::Tasks;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Description r�sum�e de MyForm1
	/// </summary>
	
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtid;

	private: System::Windows::Forms::TextBox^ txtprenom;

	private: System::Windows::Forms::TextBox^ txtnom;

	private: System::Windows::Forms::TextBox^ txtdate;


	private: System::Windows::Forms::TextBox^ txtadresse;




	private: System::Windows::Forms::TextBox^ txtsuperieur;
	private: System::Windows::Forms::Button^ button2;

	//public: enum ConnectionState;

	public: String^ip= "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_exit;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: int index;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m�thode avec l'�diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->btn_exit = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->txtid = (gcnew System::Windows::Forms::TextBox());
			   this->txtprenom = (gcnew System::Windows::Forms::TextBox());
			   this->txtnom = (gcnew System::Windows::Forms::TextBox());
			   this->txtdate = (gcnew System::Windows::Forms::TextBox());
			   this->txtadresse = (gcnew System::Windows::Forms::TextBox());
			   this->txtsuperieur = (gcnew System::Windows::Forms::TextBox());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // btn_exit
			   // 
			   this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_exit->ForeColor = System::Drawing::Color::Blue;
			   this->btn_exit->Location = System::Drawing::Point(15, 15);
			   this->btn_exit->Name = L"btn_exit";
			   this->btn_exit->Size = System::Drawing::Size(100, 25);
			   this->btn_exit->TabIndex = 11;
			   this->btn_exit->Text = L"Retour";
			   this->btn_exit->UseVisualStyleBackColor = true;
			   this->btn_exit->Click += gcnew System::EventHandler(this, &Form2::btn_exit_Click);
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(523, 381);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(194, 46);
			   this->button1->TabIndex = 12;
			   this->button1->Text = L"valider";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(265, 62);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(21, 17);
			   this->label11->TabIndex = 13;
			   this->label11->Text = L"ID";
			   this->label11->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(217, 240);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(106, 17);
			   this->label2->TabIndex = 14;
			   this->label2->Text = L"nom_personnel";
			   this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(196, 162);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(127, 17);
			   this->label3->TabIndex = 15;
			   this->label3->Text = L"prenom_personnel";
			   this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(692, 62);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(110, 17);
			   this->label4->TabIndex = 16;
			   this->label4->Text = L"date_embauche";
			   this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(692, 162);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(130, 17);
			   this->label5->TabIndex = 17;
			   this->label5->Text = L"adresse_personnel";
			   this->label5->Click += gcnew System::EventHandler(this, &Form2::label5_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(692, 245);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(103, 17);
			   this->label6->TabIndex = 18;
			   this->label6->Text = L"nom_superieur";
			   this->label6->Click += gcnew System::EventHandler(this, &Form2::label6_Click);
			   // 
			   // txtid
			   // 
			   this->txtid->Location = System::Drawing::Point(341, 62);
			   this->txtid->Name = L"txtid";
			   this->txtid->Size = System::Drawing::Size(194, 22);
			   this->txtid->TabIndex = 19;
			   this->txtid->TextChanged += gcnew System::EventHandler(this, &Form2::txtid_TextChanged);
			   // 
			   // txtprenom
			   // 
			   this->txtprenom->Location = System::Drawing::Point(341, 157);
			   this->txtprenom->Name = L"txtprenom";
			   this->txtprenom->Size = System::Drawing::Size(194, 22);
			   this->txtprenom->TabIndex = 20;
			   this->txtprenom->TextChanged += gcnew System::EventHandler(this, &Form2::txtprenom_TextChanged);
			   // 
			   // txtnom
			   // 
			   this->txtnom->Location = System::Drawing::Point(341, 240);
			   this->txtnom->Name = L"txtnom";
			   this->txtnom->Size = System::Drawing::Size(194, 22);
			   this->txtnom->TabIndex = 21;
			   this->txtnom->TextChanged += gcnew System::EventHandler(this, &Form2::txtnom_TextChanged);
			   // 
			   // txtdate
			   // 
			   this->txtdate->Location = System::Drawing::Point(827, 61);
			   this->txtdate->Name = L"txtdate";
			   this->txtdate->Size = System::Drawing::Size(143, 22);
			   this->txtdate->TabIndex = 22;
			   this->txtdate->TextChanged += gcnew System::EventHandler(this, &Form2::txtdate_TextChanged);
			   // 
			   // txtadresse
			   // 
			   this->txtadresse->Location = System::Drawing::Point(829, 162);
			   this->txtadresse->Name = L"txtadresse";
			   this->txtadresse->Size = System::Drawing::Size(141, 22);
			   this->txtadresse->TabIndex = 23;
			   this->txtadresse->TextChanged += gcnew System::EventHandler(this, &Form2::txtadresse_TextChanged);
			   // 
			   // txtsuperieur
			   // 
			   this->txtsuperieur->Location = System::Drawing::Point(827, 245);
			   this->txtsuperieur->Name = L"txtsuperieur";
			   this->txtsuperieur->Size = System::Drawing::Size(143, 22);
			   this->txtsuperieur->TabIndex = 24;
			   this->txtsuperieur->TextChanged += gcnew System::EventHandler(this, &Form2::txtsuperieur_TextChanged);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(1043, 16);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(121, 32);
			   this->button2->TabIndex = 25;
			   this->button2->Text = L"Affichage";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			   // 
			   // Form2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1200, 500);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->txtsuperieur);
			   this->Controls->Add(this->txtadresse);
			   this->Controls->Add(this->txtdate);
			   this->Controls->Add(this->txtnom);
			   this->Controls->Add(this->txtprenom);
			   this->Controls->Add(this->txtid);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->btn_exit);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MaximizeBox = false;
			   this->Name = L"Form2";
			   this->Text = L"Gestion";
			   this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^q = "insert into tab_personnel(ID,nom_personnel,prenom_personnel,date_embauche,adresse_personnel,superieur)values('" + txtid->Text->ToString() + "','" + txtnom->Text->ToString() + "','" + txtprenom->Text->ToString() + "','" + txtdate->Text->ToString() + "','" + txtadresse->Text->ToString() + "','" + txtsuperieur->Text->ToString() + "')";
		SqlCommand^ cmd = gcnew SqlCommand(q,appli);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Données inseré dans la BDD");
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtsuperieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtadresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txtdate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtnom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtprenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	Form15^ Form = gcnew Form15();
	Form->ShowDialog();
	this->Show();
}
};
	
}
