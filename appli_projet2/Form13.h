#pragma once

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
	/// Description résumée de Form12
	/// </summary>
	public ref class Form13 : public System::Windows::Forms::Form
	{
	public:
		Form13(void)
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
		~Form13()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";

	private: System::Windows::Forms::Button^ btn_exit;
	public: int index;
	private: System::Windows::Forms::GroupBox^ groupBox_modif;
	private: System::Windows::Forms::GroupBox^ groupBox_donnee;
	private: System::Windows::Forms::TextBox^ txt_prenom;

	private: System::Windows::Forms::TextBox^ txt_nom;

	private: System::Windows::Forms::Label^ label_prenom;


	private: System::Windows::Forms::Label^ label_nom;
















	private: System::Windows::Forms::TextBox^ txt_ID;













	private: System::Windows::Forms::CheckBox^ checkBox_id;
	private: System::Windows::Forms::TextBox^ txt_ttc;
	private: System::Windows::Forms::CheckBox^ checkBox_ttc;
	private: System::Windows::Forms::TextBox^ txt_tva;
	private: System::Windows::Forms::CheckBox^ checkBox_tva;
	private: System::Windows::Forms::TextBox^ txt_ht;
	private: System::Windows::Forms::CheckBox^ checkBox_ht;
	private: System::Windows::Forms::GroupBox^ groupBox_pay;

	private: System::Windows::Forms::GroupBox^ groupBox_id;
	private: System::Windows::Forms::GroupBox^ groupBox_date;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ txt_moy_pay;
	private: System::Windows::Forms::CheckBox^ moyen;


	private: System::Windows::Forms::CheckBox^ checkBox_moy_pay;

	private: System::Windows::Forms::TextBox^ txt_livraion;

	private: System::Windows::Forms::TextBox^ txt_emission;

	private: System::Windows::Forms::TextBox^ txt_date_pay;
	private: System::Windows::Forms::CheckBox^ checkBox_livraison;

	private: System::Windows::Forms::CheckBox^ che;
	private: System::Windows::Forms::CheckBox^ checkBox_date_pay;














	public:

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
			this->groupBox_modif = (gcnew System::Windows::Forms::GroupBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->groupBox_donnee = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_id = (gcnew System::Windows::Forms::CheckBox());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->checkBox_ht = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_tva = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_ttc = (gcnew System::Windows::Forms::CheckBox());
			this->txt_ht = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva = (gcnew System::Windows::Forms::TextBox());
			this->txt_ttc = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_id = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_pay = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_date = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_date_pay = (gcnew System::Windows::Forms::CheckBox());
			this->che = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_livraison = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_moy_pay = (gcnew System::Windows::Forms::CheckBox());
			this->moyen = (gcnew System::Windows::Forms::CheckBox());
			this->txt_date_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_emission = (gcnew System::Windows::Forms::TextBox());
			this->txt_livraion = (gcnew System::Windows::Forms::TextBox());
			this->txt_moy_pay = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_modif->SuspendLayout();
			this->groupBox_donnee->SuspendLayout();
			this->groupBox_id->SuspendLayout();
			this->groupBox_pay->SuspendLayout();
			this->groupBox_date->SuspendLayout();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form13::btn_exit_Click);
			// 
			// groupBox_modif
			// 
			this->groupBox_modif->Controls->Add(this->txt_prenom);
			this->groupBox_modif->Controls->Add(this->txt_nom);
			this->groupBox_modif->Controls->Add(this->label_prenom);
			this->groupBox_modif->Controls->Add(this->label_nom);
			this->groupBox_modif->Location = System::Drawing::Point(12, 76);
			this->groupBox_modif->Name = L"groupBox_modif";
			this->groupBox_modif->Size = System::Drawing::Size(1073, 86);
			this->groupBox_modif->TabIndex = 12;
			this->groupBox_modif->TabStop = false;
			this->groupBox_modif->Text = L"Client à modifier :";
			this->groupBox_modif->Enter += gcnew System::EventHandler(this, &Form13::groupBox_modif_Enter);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(755, 37);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(196, 22);
			this->txt_prenom->TabIndex = 14;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &Form13::txt_prenom_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(205, 37);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(151, 22);
			this->txt_nom->TabIndex = 2;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &Form13::txt_nom_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(661, 40);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(56, 17);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"prenom";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form13::label_prenom_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(154, 42);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form13::label_nom_Click);
			// 
			// groupBox_donnee
			// 
			this->groupBox_donnee->Controls->Add(this->groupBox_pay);
			this->groupBox_donnee->Controls->Add(this->groupBox_date);
			this->groupBox_donnee->Controls->Add(this->groupBox_id);
			this->groupBox_donnee->Location = System::Drawing::Point(12, 195);
			this->groupBox_donnee->Name = L"groupBox_donnee";
			this->groupBox_donnee->Size = System::Drawing::Size(1073, 452);
			this->groupBox_donnee->TabIndex = 13;
			this->groupBox_donnee->TabStop = false;
			this->groupBox_donnee->Text = L"nouvelles données:";
			this->groupBox_donnee->Enter += gcnew System::EventHandler(this, &Form13::groupBox_donnee_Enter);
			// 
			// checkBox_id
			// 
			this->checkBox_id->AutoSize = true;
			this->checkBox_id->Location = System::Drawing::Point(6, 36);
			this->checkBox_id->Name = L"checkBox_id";
			this->checkBox_id->Size = System::Drawing::Size(43, 21);
			this->checkBox_id->TabIndex = 12;
			this->checkBox_id->Text = L"ID";
			this->checkBox_id->UseVisualStyleBackColor = true;
			this->checkBox_id->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_id_CheckedChanged);
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(55, 36);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(148, 22);
			this->txt_ID->TabIndex = 6;
			this->txt_ID->TextChanged += gcnew System::EventHandler(this, &Form13::txt_ID_TextChanged);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(328, 653);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form13::btn_valider_Click);
			// 
			// checkBox_ht
			// 
			this->checkBox_ht->AutoSize = true;
			this->checkBox_ht->Location = System::Drawing::Point(6, 144);
			this->checkBox_ht->Name = L"checkBox_ht";
			this->checkBox_ht->Size = System::Drawing::Size(101, 21);
			this->checkBox_ht->TabIndex = 37;
			this->checkBox_ht->Text = L"montant_ht";
			this->checkBox_ht->UseVisualStyleBackColor = true;
			this->checkBox_ht->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_ht_CheckedChanged);
			// 
			// checkBox_tva
			// 
			this->checkBox_tva->AutoSize = true;
			this->checkBox_tva->Location = System::Drawing::Point(6, 190);
			this->checkBox_tva->Name = L"checkBox_tva";
			this->checkBox_tva->Size = System::Drawing::Size(108, 21);
			this->checkBox_tva->TabIndex = 38;
			this->checkBox_tva->Text = L"montant_tva";
			this->checkBox_tva->UseVisualStyleBackColor = true;
			this->checkBox_tva->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_tva_CheckedChanged);
			// 
			// checkBox_ttc
			// 
			this->checkBox_ttc->AutoSize = true;
			this->checkBox_ttc->Location = System::Drawing::Point(6, 225);
			this->checkBox_ttc->Name = L"checkBox_ttc";
			this->checkBox_ttc->Size = System::Drawing::Size(104, 21);
			this->checkBox_ttc->TabIndex = 39;
			this->checkBox_ttc->Text = L"montant_ttc";
			this->checkBox_ttc->UseVisualStyleBackColor = true;
			this->checkBox_ttc->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_ttc_CheckedChanged);
			// 
			// txt_ht
			// 
			this->txt_ht->Location = System::Drawing::Point(175, 144);
			this->txt_ht->Name = L"txt_ht";
			this->txt_ht->Size = System::Drawing::Size(158, 22);
			this->txt_ht->TabIndex = 40;
			this->txt_ht->TextChanged += gcnew System::EventHandler(this, &Form13::txt_ht_TextChanged);
			// 
			// txt_tva
			// 
			this->txt_tva->Location = System::Drawing::Point(175, 189);
			this->txt_tva->Name = L"txt_tva";
			this->txt_tva->Size = System::Drawing::Size(158, 22);
			this->txt_tva->TabIndex = 41;
			this->txt_tva->TextChanged += gcnew System::EventHandler(this, &Form13::txt_tva_TextChanged);
			// 
			// txt_ttc
			// 
			this->txt_ttc->Location = System::Drawing::Point(175, 237);
			this->txt_ttc->Name = L"txt_ttc";
			this->txt_ttc->Size = System::Drawing::Size(158, 22);
			this->txt_ttc->TabIndex = 42;
			this->txt_ttc->TextChanged += gcnew System::EventHandler(this, &Form13::txt_ttc_TextChanged);
			// 
			// groupBox_id
			// 
			this->groupBox_id->Controls->Add(this->checkBox_id);
			this->groupBox_id->Controls->Add(this->txt_ID);
			this->groupBox_id->Location = System::Drawing::Point(23, 37);
			this->groupBox_id->Name = L"groupBox_id";
			this->groupBox_id->Size = System::Drawing::Size(264, 131);
			this->groupBox_id->TabIndex = 43;
			this->groupBox_id->TabStop = false;
			this->groupBox_id->Text = L"Identifiant";
			this->groupBox_id->Enter += gcnew System::EventHandler(this, &Form13::groupBox_id_Enter);
			// 
			// groupBox_pay
			// 
			this->groupBox_pay->Controls->Add(this->textBox5);
			this->groupBox_pay->Controls->Add(this->txt_moy_pay);
			this->groupBox_pay->Controls->Add(this->moyen);
			this->groupBox_pay->Controls->Add(this->checkBox_moy_pay);
			this->groupBox_pay->Controls->Add(this->txt_ttc);
			this->groupBox_pay->Controls->Add(this->checkBox_ttc);
			this->groupBox_pay->Controls->Add(this->checkBox_ht);
			this->groupBox_pay->Controls->Add(this->txt_tva);
			this->groupBox_pay->Controls->Add(this->txt_ht);
			this->groupBox_pay->Controls->Add(this->checkBox_tva);
			this->groupBox_pay->Location = System::Drawing::Point(403, 37);
			this->groupBox_pay->Name = L"groupBox_pay";
			this->groupBox_pay->Size = System::Drawing::Size(350, 282);
			this->groupBox_pay->TabIndex = 45;
			this->groupBox_pay->TabStop = false;
			this->groupBox_pay->Text = L"payement";
			this->groupBox_pay->Enter += gcnew System::EventHandler(this, &Form13::groupBox_pay_Enter);
			// 
			// groupBox_date
			// 
			this->groupBox_date->Controls->Add(this->txt_livraion);
			this->groupBox_date->Controls->Add(this->txt_emission);
			this->groupBox_date->Controls->Add(this->txt_date_pay);
			this->groupBox_date->Controls->Add(this->checkBox_livraison);
			this->groupBox_date->Controls->Add(this->che);
			this->groupBox_date->Controls->Add(this->checkBox_date_pay);
			this->groupBox_date->Location = System::Drawing::Point(23, 193);
			this->groupBox_date->Name = L"groupBox_date";
			this->groupBox_date->Size = System::Drawing::Size(311, 185);
			this->groupBox_date->TabIndex = 44;
			this->groupBox_date->TabStop = false;
			this->groupBox_date->Text = L"Date";
			this->groupBox_date->Enter += gcnew System::EventHandler(this, &Form13::groupBox_date_Enter);
			// 
			// checkBox_date_pay
			// 
			this->checkBox_date_pay->AutoSize = true;
			this->checkBox_date_pay->Location = System::Drawing::Point(7, 45);
			this->checkBox_date_pay->Name = L"checkBox_date_pay";
			this->checkBox_date_pay->Size = System::Drawing::Size(128, 21);
			this->checkBox_date_pay->TabIndex = 0;
			this->checkBox_date_pay->Text = L"date_payement";
			this->checkBox_date_pay->UseVisualStyleBackColor = true;
			// 
			// che
			// 
			this->che->AutoSize = true;
			this->che->Location = System::Drawing::Point(7, 104);
			this->che->Name = L"che";
			this->che->Size = System::Drawing::Size(121, 21);
			this->che->TabIndex = 1;
			this->che->Text = L"date_emission";
			this->che->UseVisualStyleBackColor = true;
			this->che->CheckedChanged += gcnew System::EventHandler(this, &Form13::che_CheckedChanged);
			// 
			// checkBox_livraison
			// 
			this->checkBox_livraison->AutoSize = true;
			this->checkBox_livraison->Location = System::Drawing::Point(7, 158);
			this->checkBox_livraison->Name = L"checkBox_livraison";
			this->checkBox_livraison->Size = System::Drawing::Size(118, 21);
			this->checkBox_livraison->TabIndex = 2;
			this->checkBox_livraison->Text = L"date_livraison";
			this->checkBox_livraison->UseVisualStyleBackColor = true;
			// 
			// checkBox_moy_pay
			// 
			this->checkBox_moy_pay->AutoSize = true;
			this->checkBox_moy_pay->Location = System::Drawing::Point(6, 35);
			this->checkBox_moy_pay->Name = L"checkBox_moy_pay";
			this->checkBox_moy_pay->Size = System::Drawing::Size(142, 21);
			this->checkBox_moy_pay->TabIndex = 43;
			this->checkBox_moy_pay->Text = L"moyen_payement";
			this->checkBox_moy_pay->UseVisualStyleBackColor = true;
			// 
			// moyen
			// 
			this->moyen->AutoSize = true;
			this->moyen->Location = System::Drawing::Point(6, 82);
			this->moyen->Name = L"moyen";
			this->moyen->Size = System::Drawing::Size(98, 21);
			this->moyen->TabIndex = 44;
			this->moyen->Text = L"checkBox5";
			this->moyen->UseVisualStyleBackColor = true;
			// 
			// txt_date_pay
			// 
			this->txt_date_pay->Location = System::Drawing::Point(164, 45);
			this->txt_date_pay->Name = L"txt_date_pay";
			this->txt_date_pay->Size = System::Drawing::Size(126, 22);
			this->txt_date_pay->TabIndex = 3;
			// 
			// txt_emission
			// 
			this->txt_emission->Location = System::Drawing::Point(164, 103);
			this->txt_emission->Name = L"txt_emission";
			this->txt_emission->Size = System::Drawing::Size(126, 22);
			this->txt_emission->TabIndex = 4;
			// 
			// txt_livraion
			// 
			this->txt_livraion->Location = System::Drawing::Point(164, 157);
			this->txt_livraion->Name = L"txt_livraion";
			this->txt_livraion->Size = System::Drawing::Size(126, 22);
			this->txt_livraion->TabIndex = 5;
			// 
			// txt_moy_pay
			// 
			this->txt_moy_pay->Location = System::Drawing::Point(175, 35);
			this->txt_moy_pay->Name = L"txt_moy_pay";
			this->txt_moy_pay->Size = System::Drawing::Size(100, 22);
			this->txt_moy_pay->TabIndex = 45;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(197, 82);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 46;
			// 
			// Form13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 731);
			this->Controls->Add(this->groupBox_donnee);
			this->Controls->Add(this->groupBox_modif);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_valider);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form13";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form13::Form11_Load);
			this->groupBox_modif->ResumeLayout(false);
			this->groupBox_modif->PerformLayout();
			this->groupBox_donnee->ResumeLayout(false);
			this->groupBox_id->ResumeLayout(false);
			this->groupBox_id->PerformLayout();
			this->groupBox_pay->ResumeLayout(false);
			this->groupBox_pay->PerformLayout();
			this->groupBox_date->ResumeLayout(false);
			this->groupBox_date->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion

	private: System::Void Form11_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void groupBox_modif_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox_donnee_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_prenom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txt_ID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txtnom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txt_prenom1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_date_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txt_adresse_livraison_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void txt_adresse_facturation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void txt_num_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void checkBox_id_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void checkBox_nom_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void checkBox_prenom_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void checkBox_date_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void checkBox_adresse_livraison_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void checkBox_adresse_facturation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void checkBox_num_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox_id->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ o = "UPDATE tab_client SET ID = '" + txt_ID->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd = gcnew SqlCommand(o, appli);
			cmd->ExecuteNonQuery();
		}
		if (this->checkBox_nom->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ a = "UPDATE tab_client SET nom_client = '" + txtnom->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd1 = gcnew SqlCommand(a, appli);
			cmd1->ExecuteNonQuery();
		}
		if (this->checkBox_prenom->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ b = "UPDATE tab_client SET prenom_client = '" + txt_prenom1->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd2 = gcnew SqlCommand(b, appli);
			cmd2->ExecuteNonQuery();
		}
		if (this->checkBox_date->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ c = "UPDATE tab_client SET date_anniversaire = '" + txt_date->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd3 = gcnew SqlCommand(c, appli);
			cmd3->ExecuteNonQuery();
		}
		if (this->checkBox_adresse_livraison->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ d = "UPDATE tab_client SET adresse_livraison = '" + txt_adresse_livraison->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd4 = gcnew SqlCommand(d, appli);
			cmd4->ExecuteNonQuery();
		}
		if (this->checkBox_adresse_facturation->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ f = "UPDATE tab_client SET adresse_facturation = '" + txt_adresse_facturation->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd6 = gcnew SqlCommand(f, appli);
			cmd6->ExecuteNonQuery();
		}
		if (this->checkBox_num->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ e = "UPDATE tab_client SET num_client = '" + txt_num->Text->ToString() + "' WHERE nom_client='" + txt_nom->Text->ToString() + "'";
			SqlCommand^ cmd5 = gcnew SqlCommand(e, appli);
			cmd5->ExecuteNonQuery();
		}
		MessageBox::Show("Données modifiées");
		this->Close();

	}
	private: System::Void groupBox_id_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox_date_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_pay_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_ht_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ht_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_tva_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_tva_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_ttc_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ttc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void che_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
