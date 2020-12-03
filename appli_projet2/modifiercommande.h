#pragma once

#include "facture.h"
#include "affichercommande.h"

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
	private: System::Windows::Forms::Button^ btn_facture;
	private: System::Windows::Forms::Button^ btn_exit;
	public: int index;
	private: System::Windows::Forms::GroupBox^ groupBox_modif;
	private: System::Windows::Forms::GroupBox^ groupBox_donnee;


	private: System::Windows::Forms::TextBox^ txt_ttc;
	private: System::Windows::Forms::CheckBox^ checkBox_ttc;
	private: System::Windows::Forms::TextBox^ txt_tva;
	private: System::Windows::Forms::CheckBox^ checkBox_tva;
	private: System::Windows::Forms::TextBox^ txt_ht;
	private: System::Windows::Forms::CheckBox^ checkBox_ht;
	private: System::Windows::Forms::GroupBox^ groupBox_pay;

	private: System::Windows::Forms::GroupBox^ groupBox_id;
	private: System::Windows::Forms::GroupBox^ groupBox_date;
	private: System::Windows::Forms::TextBox^ txt_solde;

	private: System::Windows::Forms::TextBox^ txt_moy_pay;
	private: System::Windows::Forms::CheckBox^ solde_reglement;



	private: System::Windows::Forms::CheckBox^ checkBox_moy_pay;

	private: System::Windows::Forms::TextBox^ txt_livraion;

	private: System::Windows::Forms::TextBox^ txt_emission;

	private: System::Windows::Forms::TextBox^ txt_date_pay;
	private: System::Windows::Forms::CheckBox^ checkBox_livraison;

	private: System::Windows::Forms::CheckBox^ che;
	private: System::Windows::Forms::CheckBox^ checkBox_date_pay;
	private: System::Windows::Forms::GroupBox^ groupBox_article;


	private: System::Windows::Forms::TextBox^ txt_article4;
	private: System::Windows::Forms::TextBox^ txt_article3;
	private: System::Windows::Forms::TextBox^ txt_article2;
	private: System::Windows::Forms::TextBox^ txt_article1;

	private: System::Windows::Forms::CheckBox^ checkBox_article4;
	private: System::Windows::Forms::CheckBox^ checkBox_article3;
	private: System::Windows::Forms::CheckBox^ checkBox_artcicle2;
	private: System::Windows::Forms::CheckBox^ checkBox_article1;
private: System::Windows::Forms::GroupBox^ groupBox_client;

private: System::Windows::Forms::TextBox^ txt_client;
private: System::Windows::Forms::CheckBox^ checkBox_nom_client;
private: System::Windows::Forms::TextBox^ txt_ref;
private: System::Windows::Forms::TextBox^ txt_id;
private: System::Windows::Forms::CheckBox^ checkBox_ref;
private: System::Windows::Forms::CheckBox^ checkBox_id;
private: System::Windows::Forms::TextBox^ txt_reference;
private: System::Windows::Forms::TextBox^ txt_identifiant;
private: System::Windows::Forms::Label^ label_ref;
private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Button^ button1;




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
			this->txt_reference = (gcnew System::Windows::Forms::TextBox());
			this->txt_identifiant = (gcnew System::Windows::Forms::TextBox());
			this->label_ref = (gcnew System::Windows::Forms::Label());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->groupBox_donnee = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_client = (gcnew System::Windows::Forms::GroupBox());
			this->txt_client = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_nom_client = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_article = (gcnew System::Windows::Forms::GroupBox());
			this->txt_article4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_article3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_article2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_article1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_article4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_article3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_artcicle2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_article1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_pay = (gcnew System::Windows::Forms::GroupBox());
			this->txt_solde = (gcnew System::Windows::Forms::TextBox());
			this->txt_moy_pay = (gcnew System::Windows::Forms::TextBox());
			this->solde_reglement = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_moy_pay = (gcnew System::Windows::Forms::CheckBox());
			this->txt_ttc = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_ttc = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_ht = (gcnew System::Windows::Forms::CheckBox());
			this->txt_tva = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_tva = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_date = (gcnew System::Windows::Forms::GroupBox());
			this->txt_livraion = (gcnew System::Windows::Forms::TextBox());
			this->txt_emission = (gcnew System::Windows::Forms::TextBox());
			this->txt_date_pay = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_livraison = (gcnew System::Windows::Forms::CheckBox());
			this->che = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_date_pay = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox_id = (gcnew System::Windows::Forms::GroupBox());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_ref = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_id = (gcnew System::Windows::Forms::CheckBox());
			this->btn_facture = (gcnew System::Windows::Forms::Button());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox_modif->SuspendLayout();
			this->groupBox_donnee->SuspendLayout();
			this->groupBox_client->SuspendLayout();
			this->groupBox_article->SuspendLayout();
			this->groupBox_pay->SuspendLayout();
			this->groupBox_date->SuspendLayout();
			this->groupBox_id->SuspendLayout();
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
			this->groupBox_modif->Controls->Add(this->txt_reference);
			this->groupBox_modif->Controls->Add(this->txt_identifiant);
			this->groupBox_modif->Controls->Add(this->label_ref);
			this->groupBox_modif->Controls->Add(this->label_id);
			this->groupBox_modif->Location = System::Drawing::Point(15, 70);
			this->groupBox_modif->Name = L"groupBox_modif";
			this->groupBox_modif->Size = System::Drawing::Size(1073, 86);
			this->groupBox_modif->TabIndex = 12;
			this->groupBox_modif->TabStop = false;
			this->groupBox_modif->Text = L"commande à modifier :";
			this->groupBox_modif->Enter += gcnew System::EventHandler(this, &Form13::groupBox_modif_Enter);
			// 
			// txt_reference
			// 
			this->txt_reference->Location = System::Drawing::Point(653, 29);
			this->txt_reference->Name = L"txt_reference";
			this->txt_reference->Size = System::Drawing::Size(147, 22);
			this->txt_reference->TabIndex = 3;
			this->txt_reference->TextChanged += gcnew System::EventHandler(this, &Form13::txt_reference_TextChanged);
			// 
			// txt_identifiant
			// 
			this->txt_identifiant->Location = System::Drawing::Point(222, 31);
			this->txt_identifiant->Name = L"txt_identifiant";
			this->txt_identifiant->Size = System::Drawing::Size(145, 22);
			this->txt_identifiant->TabIndex = 2;
			this->txt_identifiant->TextChanged += gcnew System::EventHandler(this, &Form13::txt_identifiant_TextChanged);
			// 
			// label_ref
			// 
			this->label_ref->AutoSize = true;
			this->label_ref->Location = System::Drawing::Point(575, 34);
			this->label_ref->Name = L"label_ref";
			this->label_ref->Size = System::Drawing::Size(69, 17);
			this->label_ref->TabIndex = 1;
			this->label_ref->Text = L"reference";
			this->label_ref->Click += gcnew System::EventHandler(this, &Form13::label_ref_Click);
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(138, 34);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(69, 17);
			this->label_id->TabIndex = 0;
			this->label_id->Text = L"Identifiant";
			this->label_id->Click += gcnew System::EventHandler(this, &Form13::label_id_Click);
			// 
			// groupBox_donnee
			// 
			this->groupBox_donnee->Controls->Add(this->groupBox_client);
			this->groupBox_donnee->Controls->Add(this->groupBox_article);
			this->groupBox_donnee->Controls->Add(this->groupBox_pay);
			this->groupBox_donnee->Controls->Add(this->groupBox_date);
			this->groupBox_donnee->Controls->Add(this->groupBox_id);
			this->groupBox_donnee->Location = System::Drawing::Point(12, 195);
			this->groupBox_donnee->Name = L"groupBox_donnee";
			this->groupBox_donnee->Size = System::Drawing::Size(1073, 389);
			this->groupBox_donnee->TabIndex = 13;
			this->groupBox_donnee->TabStop = false;
			this->groupBox_donnee->Text = L"nouvelles données:";
			this->groupBox_donnee->Enter += gcnew System::EventHandler(this, &Form13::groupBox_donnee_Enter);
			// 
			// groupBox_client
			// 
			this->groupBox_client->Controls->Add(this->txt_client);
			this->groupBox_client->Controls->Add(this->checkBox_nom_client);
			this->groupBox_client->Location = System::Drawing::Point(801, 328);
			this->groupBox_client->Name = L"groupBox_client";
			this->groupBox_client->Size = System::Drawing::Size(266, 50);
			this->groupBox_client->TabIndex = 47;
			this->groupBox_client->TabStop = false;
			this->groupBox_client->Text = L"Client";
			this->groupBox_client->Enter += gcnew System::EventHandler(this, &Form13::groupBox1_Enter);
			// 
			// txt_client
			// 
			this->txt_client->Location = System::Drawing::Point(110, 19);
			this->txt_client->Name = L"txt_client";
			this->txt_client->Size = System::Drawing::Size(137, 22);
			this->txt_client->TabIndex = 49;
			this->txt_client->TextChanged += gcnew System::EventHandler(this, &Form13::txt_client_TextChanged);
			// 
			// checkBox_nom_client
			// 
			this->checkBox_nom_client->AutoSize = true;
			this->checkBox_nom_client->Location = System::Drawing::Point(6, 21);
			this->checkBox_nom_client->Name = L"checkBox_nom_client";
			this->checkBox_nom_client->Size = System::Drawing::Size(98, 21);
			this->checkBox_nom_client->TabIndex = 48;
			this->checkBox_nom_client->Text = L"nom_client";
			this->checkBox_nom_client->UseVisualStyleBackColor = true;
			this->checkBox_nom_client->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_nom_client_CheckedChanged);
			// 
			// groupBox_article
			// 
			this->groupBox_article->Controls->Add(this->txt_article4);
			this->groupBox_article->Controls->Add(this->txt_article3);
			this->groupBox_article->Controls->Add(this->txt_article2);
			this->groupBox_article->Controls->Add(this->txt_article1);
			this->groupBox_article->Controls->Add(this->checkBox_article4);
			this->groupBox_article->Controls->Add(this->checkBox_article3);
			this->groupBox_article->Controls->Add(this->checkBox_artcicle2);
			this->groupBox_article->Controls->Add(this->checkBox_article1);
			this->groupBox_article->Location = System::Drawing::Point(794, 38);
			this->groupBox_article->Name = L"groupBox_article";
			this->groupBox_article->Size = System::Drawing::Size(273, 235);
			this->groupBox_article->TabIndex = 46;
			this->groupBox_article->TabStop = false;
			this->groupBox_article->Text = L"Article";
			this->groupBox_article->Enter += gcnew System::EventHandler(this, &Form13::groupBox_article_Enter);
			// 
			// txt_article4
			// 
			this->txt_article4->Location = System::Drawing::Point(208, 170);
			this->txt_article4->Name = L"txt_article4";
			this->txt_article4->Size = System::Drawing::Size(46, 22);
			this->txt_article4->TabIndex = 8;
			this->txt_article4->TextChanged += gcnew System::EventHandler(this, &Form13::txt_article4_TextChanged);
			// 
			// txt_article3
			// 
			this->txt_article3->Location = System::Drawing::Point(208, 122);
			this->txt_article3->Name = L"txt_article3";
			this->txt_article3->Size = System::Drawing::Size(46, 22);
			this->txt_article3->TabIndex = 7;
			this->txt_article3->TextChanged += gcnew System::EventHandler(this, &Form13::txt_article3_TextChanged);
			// 
			// txt_article2
			// 
			this->txt_article2->Location = System::Drawing::Point(208, 82);
			this->txt_article2->Name = L"txt_article2";
			this->txt_article2->Size = System::Drawing::Size(46, 22);
			this->txt_article2->TabIndex = 6;
			this->txt_article2->TextChanged += gcnew System::EventHandler(this, &Form13::txt_article2_TextChanged);
			// 
			// txt_article1
			// 
			this->txt_article1->Location = System::Drawing::Point(208, 35);
			this->txt_article1->Name = L"txt_article1";
			this->txt_article1->Size = System::Drawing::Size(46, 22);
			this->txt_article1->TabIndex = 5;
			this->txt_article1->TextChanged += gcnew System::EventHandler(this, &Form13::txt_article1_TextChanged);
			// 
			// checkBox_article4
			// 
			this->checkBox_article4->AutoSize = true;
			this->checkBox_article4->Location = System::Drawing::Point(7, 170);
			this->checkBox_article4->Name = L"checkBox_article4";
			this->checkBox_article4->Size = System::Drawing::Size(154, 21);
			this->checkBox_article4->TabIndex = 3;
			this->checkBox_article4->Text = L"quantite_resistance";
			this->checkBox_article4->UseVisualStyleBackColor = true;
			this->checkBox_article4->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_article4_CheckedChanged);
			// 
			// checkBox_article3
			// 
			this->checkBox_article3->AutoSize = true;
			this->checkBox_article3->Location = System::Drawing::Point(7, 122);
			this->checkBox_article3->Name = L"checkBox_article3";
			this->checkBox_article3->Size = System::Drawing::Size(171, 21);
			this->checkBox_article3->TabIndex = 2;
			this->checkBox_article3->Text = L"quantite_afficheur_led";
			this->checkBox_article3->UseVisualStyleBackColor = true;
			this->checkBox_article3->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_article3_CheckedChanged);
			// 
			// checkBox_artcicle2
			// 
			this->checkBox_artcicle2->AutoSize = true;
			this->checkBox_artcicle2->Location = System::Drawing::Point(7, 82);
			this->checkBox_artcicle2->Name = L"checkBox_artcicle2";
			this->checkBox_artcicle2->Size = System::Drawing::Size(182, 21);
			this->checkBox_artcicle2->TabIndex = 1;
			this->checkBox_artcicle2->Text = L"quantite_multi_vibrateur";
			this->checkBox_artcicle2->UseVisualStyleBackColor = true;
			this->checkBox_artcicle2->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_artcicle2_CheckedChanged);
			// 
			// checkBox_article1
			// 
			this->checkBox_article1->AutoSize = true;
			this->checkBox_article1->Location = System::Drawing::Point(7, 35);
			this->checkBox_article1->Name = L"checkBox_article1";
			this->checkBox_article1->Size = System::Drawing::Size(195, 21);
			this->checkBox_article1->TabIndex = 0;
			this->checkBox_article1->Text = L"quantite_bouton_poussoir";
			this->checkBox_article1->UseVisualStyleBackColor = true;
			this->checkBox_article1->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_article1_CheckedChanged);
			// 
			// groupBox_pay
			// 
			this->groupBox_pay->Controls->Add(this->txt_solde);
			this->groupBox_pay->Controls->Add(this->txt_moy_pay);
			this->groupBox_pay->Controls->Add(this->solde_reglement);
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
			// txt_solde
			// 
			this->txt_solde->Location = System::Drawing::Point(175, 82);
			this->txt_solde->Name = L"txt_solde";
			this->txt_solde->Size = System::Drawing::Size(158, 22);
			this->txt_solde->TabIndex = 46;
			this->txt_solde->TextChanged += gcnew System::EventHandler(this, &Form13::txt_solde_TextChanged);
			// 
			// txt_moy_pay
			// 
			this->txt_moy_pay->Location = System::Drawing::Point(175, 35);
			this->txt_moy_pay->Name = L"txt_moy_pay";
			this->txt_moy_pay->Size = System::Drawing::Size(158, 22);
			this->txt_moy_pay->TabIndex = 45;
			this->txt_moy_pay->TextChanged += gcnew System::EventHandler(this, &Form13::txt_moy_pay_TextChanged);
			// 
			// solde_reglement
			// 
			this->solde_reglement->AutoSize = true;
			this->solde_reglement->Location = System::Drawing::Point(6, 82);
			this->solde_reglement->Name = L"solde_reglement";
			this->solde_reglement->Size = System::Drawing::Size(135, 21);
			this->solde_reglement->TabIndex = 44;
			this->solde_reglement->Text = L"solde_reglement";
			this->solde_reglement->UseVisualStyleBackColor = true;
			this->solde_reglement->CheckedChanged += gcnew System::EventHandler(this, &Form13::solde_reglement_CheckedChanged);
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
			this->checkBox_moy_pay->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_moy_pay_CheckedChanged);
			// 
			// txt_ttc
			// 
			this->txt_ttc->Location = System::Drawing::Point(175, 237);
			this->txt_ttc->Name = L"txt_ttc";
			this->txt_ttc->Size = System::Drawing::Size(158, 22);
			this->txt_ttc->TabIndex = 42;
			this->txt_ttc->TextChanged += gcnew System::EventHandler(this, &Form13::txt_ttc_TextChanged);
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
			// txt_tva
			// 
			this->txt_tva->Location = System::Drawing::Point(175, 189);
			this->txt_tva->Name = L"txt_tva";
			this->txt_tva->Size = System::Drawing::Size(158, 22);
			this->txt_tva->TabIndex = 41;
			this->txt_tva->TextChanged += gcnew System::EventHandler(this, &Form13::txt_tva_TextChanged);
			// 
			// txt_ht
			// 
			this->txt_ht->Location = System::Drawing::Point(175, 144);
			this->txt_ht->Name = L"txt_ht";
			this->txt_ht->Size = System::Drawing::Size(158, 22);
			this->txt_ht->TabIndex = 40;
			this->txt_ht->TextChanged += gcnew System::EventHandler(this, &Form13::txt_ht_TextChanged);
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
			// txt_livraion
			// 
			this->txt_livraion->Location = System::Drawing::Point(164, 157);
			this->txt_livraion->Name = L"txt_livraion";
			this->txt_livraion->Size = System::Drawing::Size(126, 22);
			this->txt_livraion->TabIndex = 5;
			this->txt_livraion->TextChanged += gcnew System::EventHandler(this, &Form13::txt_livraion_TextChanged);
			// 
			// txt_emission
			// 
			this->txt_emission->Location = System::Drawing::Point(164, 103);
			this->txt_emission->Name = L"txt_emission";
			this->txt_emission->Size = System::Drawing::Size(126, 22);
			this->txt_emission->TabIndex = 4;
			this->txt_emission->TextChanged += gcnew System::EventHandler(this, &Form13::txt_emission_TextChanged);
			// 
			// txt_date_pay
			// 
			this->txt_date_pay->Location = System::Drawing::Point(164, 45);
			this->txt_date_pay->Name = L"txt_date_pay";
			this->txt_date_pay->Size = System::Drawing::Size(126, 22);
			this->txt_date_pay->TabIndex = 3;
			this->txt_date_pay->TextChanged += gcnew System::EventHandler(this, &Form13::txt_date_pay_TextChanged);
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
			this->checkBox_livraison->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_livraison_CheckedChanged);
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
			// checkBox_date_pay
			// 
			this->checkBox_date_pay->AutoSize = true;
			this->checkBox_date_pay->Location = System::Drawing::Point(7, 45);
			this->checkBox_date_pay->Name = L"checkBox_date_pay";
			this->checkBox_date_pay->Size = System::Drawing::Size(128, 21);
			this->checkBox_date_pay->TabIndex = 0;
			this->checkBox_date_pay->Text = L"date_payement";
			this->checkBox_date_pay->UseVisualStyleBackColor = true;
			this->checkBox_date_pay->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_date_pay_CheckedChanged);
			// 
			// groupBox_id
			// 
			this->groupBox_id->Controls->Add(this->txt_ref);
			this->groupBox_id->Controls->Add(this->txt_id);
			this->groupBox_id->Controls->Add(this->checkBox_ref);
			this->groupBox_id->Controls->Add(this->checkBox_id);
			this->groupBox_id->Location = System::Drawing::Point(23, 37);
			this->groupBox_id->Name = L"groupBox_id";
			this->groupBox_id->Size = System::Drawing::Size(264, 119);
			this->groupBox_id->TabIndex = 43;
			this->groupBox_id->TabStop = false;
			this->groupBox_id->Text = L"Identifiant";
			this->groupBox_id->Enter += gcnew System::EventHandler(this, &Form13::groupBox_id_Enter);
			// 
			// txt_ref
			// 
			this->txt_ref->Location = System::Drawing::Point(132, 82);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->Size = System::Drawing::Size(100, 22);
			this->txt_ref->TabIndex = 3;
			this->txt_ref->TextChanged += gcnew System::EventHandler(this, &Form13::txt_ref_TextChanged);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(132, 35);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(100, 22);
			this->txt_id->TabIndex = 2;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form13::txt_id_TextChanged_1);
			// 
			// checkBox_ref
			// 
			this->checkBox_ref->AutoSize = true;
			this->checkBox_ref->Location = System::Drawing::Point(7, 82);
			this->checkBox_ref->Name = L"checkBox_ref";
			this->checkBox_ref->Size = System::Drawing::Size(91, 21);
			this->checkBox_ref->TabIndex = 1;
			this->checkBox_ref->Text = L"reference";
			this->checkBox_ref->UseVisualStyleBackColor = true;
			this->checkBox_ref->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_ref_CheckedChanged);
			// 
			// checkBox_id
			// 
			this->checkBox_id->AutoSize = true;
			this->checkBox_id->Location = System::Drawing::Point(7, 35);
			this->checkBox_id->Name = L"checkBox_id";
			this->checkBox_id->Size = System::Drawing::Size(43, 21);
			this->checkBox_id->TabIndex = 0;
			this->checkBox_id->Text = L"ID";
			this->checkBox_id->UseVisualStyleBackColor = true;
			this->checkBox_id->CheckedChanged += gcnew System::EventHandler(this, &Form13::checkBox_id_CheckedChanged);
			// 
			// btn_facture
			// 
			this->btn_facture->Location = System::Drawing::Point(885, 20);
			this->btn_facture->Name = L"btn_facture";
			this->btn_facture->Size = System::Drawing::Size(203, 44);
			this->btn_facture->TabIndex = 37;
			this->btn_facture->Text = L"facture";
			this->btn_facture->UseVisualStyleBackColor = true;
			this->btn_facture->Click += gcnew System::EventHandler(this, &Form13::btn_facture_Click);
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(167, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 25);
			this->button1->TabIndex = 39;
			this->button1->Text = L"afficher les commandes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form13::button1_Click);
			// 
			// Form13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1120, 731);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox_donnee);
			this->Controls->Add(this->groupBox_modif);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->btn_facture);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form13";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form13::Form11_Load);
			this->groupBox_modif->ResumeLayout(false);
			this->groupBox_modif->PerformLayout();
			this->groupBox_donnee->ResumeLayout(false);
			this->groupBox_client->ResumeLayout(false);
			this->groupBox_client->PerformLayout();
			this->groupBox_article->ResumeLayout(false);
			this->groupBox_article->PerformLayout();
			this->groupBox_pay->ResumeLayout(false);
			this->groupBox_pay->PerformLayout();
			this->groupBox_date->ResumeLayout(false);
			this->groupBox_date->PerformLayout();
			this->groupBox_id->ResumeLayout(false);
			this->groupBox_id->PerformLayout();
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

	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox_id->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ o = "UPDATE tab_commandes SET ID = '" + txt_id->Text->ToString() + "' WHERE ref_commande='" + txt_reference->Text->ToString() + "'";
			SqlCommand^ cmd = gcnew SqlCommand(o, appli);
			cmd->ExecuteNonQuery();
		}
		if (this->checkBox_ref->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ a = "UPDATE tab_commandes SET ref_commande = '" + txt_ref->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd1 = gcnew SqlCommand(a, appli);
			cmd1->ExecuteNonQuery();
		}
		if (this->checkBox_date_pay->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ b = "UPDATE tab_date SET date_payement = '" + txt_date_pay->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd2 = gcnew SqlCommand(b, appli);
			cmd2->ExecuteNonQuery();
		}
		if (this->che->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ c = "UPDATE tab_date SET date_emission = '" + txt_emission->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd3 = gcnew SqlCommand(c, appli);
			cmd3->ExecuteNonQuery();
		}
		if (this->checkBox_livraison->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ d = "UPDATE tab_date SET adresse_livraison = '" + txt_livraion->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd4 = gcnew SqlCommand(d, appli);
			cmd4->ExecuteNonQuery();
		}
		if (this->checkBox_moy_pay->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ f = "UPDATE tab_payement SET moyen_payement = '" + txt_moy_pay->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd6 = gcnew SqlCommand(f, appli);
			cmd6->ExecuteNonQuery();
		}
		if (this->solde_reglement->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ e = "UPDATE tab_payement SET solde_reglement = '" + txt_solde->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd5 = gcnew SqlCommand(e, appli);
			cmd5->ExecuteNonQuery();
		}
		if (this->checkBox_ht->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ g = "UPDATE tab_payement SET montant_ht = '" + txt_ht->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd7 = gcnew SqlCommand(g, appli);
			cmd7->ExecuteNonQuery();
		}
		if (this->checkBox_tva->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ h = "UPDATE tab_payement SET montant_tva = '" + txt_tva->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd8 = gcnew SqlCommand(h, appli);
			cmd8->ExecuteNonQuery();
		}
		if (this->checkBox_ttc->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ i = "UPDATE tab_payement SET montant_ttc = '" + txt_ttc->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd9 = gcnew SqlCommand(i, appli);
			cmd9->ExecuteNonQuery();
		}
		if (this->checkBox_article1->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ j = "UPDATE tab_commandes SET id_article = '" + txt_article1->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd10 = gcnew SqlCommand(j, appli);
			cmd10->ExecuteNonQuery();
		}
		if (this->checkBox_artcicle2->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ k = "UPDATE tab_commandes SET id_article2 ='" + txt_article2->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd11 = gcnew SqlCommand(k, appli);
			cmd11->ExecuteNonQuery();
		}
		if (this->checkBox_article3->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ L = "UPDATE tab_commandes SET id_article3 = '" + txt_article3->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd12 = gcnew SqlCommand(L, appli);
			cmd12->ExecuteNonQuery();
		}
		if (this->checkBox_article4->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ M = "UPDATE tab_commandes SET id_article4 = '" + txt_article4->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd13 = gcnew SqlCommand(M, appli);
			cmd13->ExecuteNonQuery();
		}
		if (this->checkBox_nom_client->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ o = "UPDATE tab_commandes SET id_client = tab_client.ID from tab_client WHERE tab_commandes.ID='" + txt_identifiant->Text->ToString() + "' AND tab_client.nom_client ='" + txt_client->Text->ToString() + "'";
			SqlCommand^ cmd15 = gcnew SqlCommand(o, appli);
			cmd15->ExecuteNonQuery();
		}
	    
		MessageBox::Show("Données modifiées");

	}
	private: System::Void btn_facture_Click(System::Object^ sender, System::EventArgs^ e)
	{

		this->Hide();
		Form5^ Form = gcnew Form5();
		Form->ShowDialog();
		this->Show();

	}
	private: System::Void groupBox_id_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox_date_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_pay_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_ht_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_ht_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_tva_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_tva_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_ttc_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_ttc_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void che_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_date_pay_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_date_pay_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void txt_emission_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_livraison_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_livraion_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_moy_pay_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_moy_pay_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void solde_reglement_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_solde_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_article1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_article1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_artcicle2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_article2_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_article3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_article3_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_article4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_article4_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_quantite_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_quantite_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void groupBox_article_Enter(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_nom_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_id_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_ref_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void txt_id_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void txt_ref_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_id_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_identifiant_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_ref_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_reference_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
