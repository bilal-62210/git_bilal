#pragma once
#include "iostream"
#include "afficherclient.h"

namespace CppCLRWinformsProjekt {
	

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
	/// Description résumée de Form3
	/// </summary>

	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::TextBox^ txt_id;

	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::Label^ label_prenom;
	private: System::Windows::Forms::Label^ label_date;
	private: System::Windows::Forms::Label^ label_numero;
	private: System::Windows::Forms::Label^ label_facturation;
	private: System::Windows::Forms::Label^ label_livraison;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_anniversaire;
	private: System::Windows::Forms::TextBox^ txt_numero;
	private: System::Windows::Forms::TextBox^ txt_facturation;
	private: System::Windows::Forms::TextBox^ txt_livraison;
	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ button1;

	private: int index;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_date = (gcnew System::Windows::Forms::Label());
			this->label_numero = (gcnew System::Windows::Forms::Label());
			this->label_facturation = (gcnew System::Windows::Forms::Label());
			this->label_livraison = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_anniversaire = (gcnew System::Windows::Forms::TextBox());
			this->txt_numero = (gcnew System::Windows::Forms::TextBox());
			this->txt_facturation = (gcnew System::Windows::Forms::TextBox());
			this->txt_livraison = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form3::btn_exit_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(675, 67);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(145, 22);
			this->txt_id->TabIndex = 12;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form3::txt_id_TextChanged);
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(617, 72);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(21, 17);
			this->label_id->TabIndex = 13;
			this->label_id->Text = L"ID";
			this->label_id->Click += gcnew System::EventHandler(this, &Form3::label_id_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(416, 186);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 14;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form3::label_nom_Click);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(395, 312);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(56, 17);
			this->label_prenom->TabIndex = 15;
			this->label_prenom->Text = L"prenom";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form3::label_prenom_Click);
			// 
			// label_date
			// 
			this->label_date->AutoSize = true;
			this->label_date->Location = System::Drawing::Point(329, 419);
			this->label_date->Name = L"label_date";
			this->label_date->Size = System::Drawing::Size(122, 17);
			this->label_date->TabIndex = 16;
			this->label_date->Text = L"date_anniversaire";
			this->label_date->Click += gcnew System::EventHandler(this, &Form3::label_date_Click);
			// 
			// label_numero
			// 
			this->label_numero->AutoSize = true;
			this->label_numero->Location = System::Drawing::Point(844, 184);
			this->label_numero->Name = L"label_numero";
			this->label_numero->Size = System::Drawing::Size(97, 17);
			this->label_numero->TabIndex = 17;
			this->label_numero->Text = L"numero_client";
			this->label_numero->Click += gcnew System::EventHandler(this, &Form3::label_numero_Click);
			// 
			// label_facturation
			// 
			this->label_facturation->AutoSize = true;
			this->label_facturation->Location = System::Drawing::Point(807, 312);
			this->label_facturation->Name = L"label_facturation";
			this->label_facturation->Size = System::Drawing::Size(134, 17);
			this->label_facturation->TabIndex = 18;
			this->label_facturation->Text = L"adresse_facturation";
			this->label_facturation->Click += gcnew System::EventHandler(this, &Form3::label_facturation_Click);
			// 
			// label_livraison
			// 
			this->label_livraison->AutoSize = true;
			this->label_livraison->Location = System::Drawing::Point(822, 414);
			this->label_livraison->Name = L"label_livraison";
			this->label_livraison->Size = System::Drawing::Size(119, 17);
			this->label_livraison->TabIndex = 19;
			this->label_livraison->Text = L"adresse_livraison";
			this->label_livraison->Click += gcnew System::EventHandler(this, &Form3::label_livraison_Click);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(457, 181);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(139, 22);
			this->txt_nom->TabIndex = 20;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &Form3::txt_nom_TextChanged);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(457, 309);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(139, 22);
			this->txt_prenom->TabIndex = 21;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &Form3::txt_prenom_TextChanged);
			// 
			// txt_anniversaire
			// 
			this->txt_anniversaire->Location = System::Drawing::Point(457, 414);
			this->txt_anniversaire->Name = L"txt_anniversaire";
			this->txt_anniversaire->Size = System::Drawing::Size(139, 22);
			this->txt_anniversaire->TabIndex = 22;
			this->txt_anniversaire->TextChanged += gcnew System::EventHandler(this, &Form3::txt_anniversaire_TextChanged);
			// 
			// txt_numero
			// 
			this->txt_numero->Location = System::Drawing::Point(947, 181);
			this->txt_numero->Name = L"txt_numero";
			this->txt_numero->Size = System::Drawing::Size(180, 22);
			this->txt_numero->TabIndex = 23;
			this->txt_numero->TextChanged += gcnew System::EventHandler(this, &Form3::txt_numero_TextChanged);
			// 
			// txt_facturation
			// 
			this->txt_facturation->Location = System::Drawing::Point(947, 307);
			this->txt_facturation->Name = L"txt_facturation";
			this->txt_facturation->Size = System::Drawing::Size(180, 22);
			this->txt_facturation->TabIndex = 24;
			this->txt_facturation->TextChanged += gcnew System::EventHandler(this, &Form3::txt_facturation_TextChanged);
			// 
			// txt_livraison
			// 
			this->txt_livraison->Location = System::Drawing::Point(947, 414);
			this->txt_livraison->Name = L"txt_livraison";
			this->txt_livraison->Size = System::Drawing::Size(180, 22);
			this->txt_livraison->TabIndex = 25;
			this->txt_livraison->TextChanged += gcnew System::EventHandler(this, &Form3::txt_livraison_TextChanged);
			// 
			// btn_valider
			// 
			this->btn_valider->Location = System::Drawing::Point(620, 539);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(194, 46);
			this->btn_valider->TabIndex = 26;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form3::btn_valider_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1156, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 31);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Affichage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1444, 635);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->txt_livraison);
			this->Controls->Add(this->txt_facturation);
			this->Controls->Add(this->txt_numero);
			this->Controls->Add(this->txt_anniversaire);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->label_livraison);
			this->Controls->Add(this->label_facturation);
			this->Controls->Add(this->label_numero);
			this->Controls->Add(this->label_date);
			this->Controls->Add(this->label_prenom);
			this->Controls->Add(this->label_nom);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form3";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e)
		{
			this->index = 0;
		}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	private: System::Void label_id_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_prenom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_date_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_anniversaire_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_numero_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_numero_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_facturation_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_facturation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_livraison_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_livraison_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ q = "insert into tab_client(ID,nom_client,prenom_client,date_anniversaire,num_client,adresse_facturation,adresse_livraison)values('" + txt_id->Text->ToString() + "','" + txt_nom->Text->ToString() + "','" + txt_prenom->Text->ToString() + "','" + txt_anniversaire->Text->ToString() + "','" + txt_numero->Text->ToString() + "','" + txt_facturation->Text->ToString() + "','" + txt_livraison->Text->ToString() + "')";
			SqlCommand^ cmd = gcnew SqlCommand(q, appli);
			cmd->ExecuteNonQuery();
			MessageBox::Show("Données inseré dans la BDD");
			
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Hide();
	Form16^ Form = gcnew Form16();
	Form->ShowDialog();
	this->Show();
}
};
}
