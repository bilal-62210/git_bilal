#pragma once
#include "affichercommande.h"

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
	/// Description résumée de Form7
	/// </summary>
	public ref class Form9 : public System::Windows::Forms::Form
	{
	public:
		Form9(void)
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
		~Form9()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int index;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::GroupBox^ groupBox_commande;
	private: System::Windows::Forms::TextBox^ txt_id;

	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
	private: System::Windows::Forms::TextBox^ txt_ref;
	public:



	private: System::Windows::Forms::Label^ label_prenom;



	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->groupBox_commande = (gcnew System::Windows::Forms::GroupBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox_commande->SuspendLayout();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form9::btn_exit_Click);
			// 
			// groupBox_commande
			// 
			this->groupBox_commande->Controls->Add(this->txt_id);
			this->groupBox_commande->Controls->Add(this->txt_ref);
			this->groupBox_commande->Controls->Add(this->label_prenom);
			this->groupBox_commande->Controls->Add(this->label_nom);
			this->groupBox_commande->Location = System::Drawing::Point(144, 157);
			this->groupBox_commande->Name = L"groupBox_commande";
			this->groupBox_commande->Size = System::Drawing::Size(747, 191);
			this->groupBox_commande->TabIndex = 12;
			this->groupBox_commande->TabStop = false;
			this->groupBox_commande->Text = L"commande à supprimer:";
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(510, 81);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(198, 22);
			this->txt_id->TabIndex = 3;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form9::txt_id_TextChanged);
			// 
			// txt_ref
			// 
			this->txt_ref->Location = System::Drawing::Point(107, 81);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->Size = System::Drawing::Size(189, 22);
			this->txt_ref->TabIndex = 2;
			this->txt_ref->TextChanged += gcnew System::EventHandler(this, &Form9::txt_ref_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(435, 86);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(69, 17);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"identifiant";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form9::label_id_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(36, 86);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(69, 17);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"reference";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form9::label_ref_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(342, 487);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form9::btn_valider_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 32);
			this->button1->TabIndex = 37;
			this->button1->Text = L"afficher les commandes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form9::button1_Click);
			// 
			// Form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1095, 634);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->groupBox_commande);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form9";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form9::Form9_Load);
			this->groupBox_commande->ResumeLayout(false);
			this->groupBox_commande->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Form9_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}



	private: System::Void label_ref_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_ref_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_id_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ o = "delete from tab_date where ID = '" + txt_id->Text->ToString() + "'";
		String^ a = "delete from tab_payement where ID = '" + txt_id->Text->ToString() + "'";
		String^ b = "delete from tab_commandes where ref_commande = '" + txt_ref->Text->ToString() + "'";
		String^ c = "delete from tab_factures where ID ='" + txt_id->Text->ToString() + "'";
		SqlCommand^ cmd = gcnew SqlCommand(o, appli);
		SqlCommand^ cmd1 = gcnew SqlCommand(a, appli);
		SqlCommand^ cmd2 = gcnew SqlCommand(b, appli);
		SqlCommand^ cmd3 = gcnew SqlCommand(c, appli);

		cmd->ExecuteNonQuery();
		cmd1->ExecuteNonQuery();
		cmd2->ExecuteNonQuery();
		cmd3->ExecuteNonQuery();
		MessageBox::Show("Données supprimé de la BDD");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		this->Hide();
		Form17^ Form = gcnew Form17();
		Form->ShowDialog();
		this->Show();
	}
};
}
