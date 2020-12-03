#pragma once
#include "facture.h"

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
	/// Description résumée de Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
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
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_exit;
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Label^ label_ref;


	private: System::Windows::Forms::Label^ label_livraison;
	private: System::Windows::Forms::Label^ label_emission;
	private: System::Windows::Forms::Label^ label_payement;
	private: System::Windows::Forms::Label^ label_pay;
	private: System::Windows::Forms::Label^ label_ht;
	private: System::Windows::Forms::Label^ label_tva;
	private: System::Windows::Forms::Label^ label_quantite;







	private: System::Windows::Forms::Label^ label_article;

	private: System::Windows::Forms::Label^ label_regl;
	private: System::Windows::Forms::Label^ label_ttc;


	private: System::Windows::Forms::TextBox^ txt_id;
	public: System::Windows::Forms::TextBox^ txt_ref;
	private: System::Windows::Forms::TextBox^ txt_livraison;
	private: System::Windows::Forms::TextBox^ txt_emission;
	private: System::Windows::Forms::TextBox^ txt_payement;
	private: System::Windows::Forms::TextBox^ txt_pay;
	private: System::Windows::Forms::TextBox^ txt_regl;
	private: System::Windows::Forms::TextBox^ txt_ht;
	private: System::Windows::Forms::TextBox^ txt_tva;
	private: System::Windows::Forms::TextBox^ txt_ttc;
	private: System::Windows::Forms::TextBox^ txt_article;
	private: System::Windows::Forms::TextBox^ txt_quantite;
	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";













	private: System::Windows::Forms::Button^ btn_facture;
	private: System::Windows::Forms::Label^ label_client;
	private: System::Windows::Forms::TextBox^ txt_client;
	private: System::Windows::Forms::GroupBox^ groupBox_ID;
	private: System::Windows::Forms::GroupBox^ groupBox_date;
	private: System::Windows::Forms::GroupBox^ groupBox_pay;
	private: System::Windows::Forms::GroupBox^ groupBox_article;




	private: System::Windows::Forms::TextBox^ txt_article4;
	private: System::Windows::Forms::TextBox^ txt_article3;
	private: System::Windows::Forms::TextBox^ txt_article2;
	private: System::Windows::Forms::Label^ label_article4;
	private: System::Windows::Forms::Label^ label_article3;
	private: System::Windows::Forms::Label^ label_article2;
	private: System::Windows::Forms::GroupBox^ groupBox_client;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label_prenom;


	private: int index;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_ref = (gcnew System::Windows::Forms::Label());
			this->label_livraison = (gcnew System::Windows::Forms::Label());
			this->label_emission = (gcnew System::Windows::Forms::Label());
			this->label_payement = (gcnew System::Windows::Forms::Label());
			this->label_pay = (gcnew System::Windows::Forms::Label());
			this->label_ht = (gcnew System::Windows::Forms::Label());
			this->label_tva = (gcnew System::Windows::Forms::Label());
			this->label_quantite = (gcnew System::Windows::Forms::Label());
			this->label_article = (gcnew System::Windows::Forms::Label());
			this->label_regl = (gcnew System::Windows::Forms::Label());
			this->label_ttc = (gcnew System::Windows::Forms::Label());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->txt_livraison = (gcnew System::Windows::Forms::TextBox());
			this->txt_emission = (gcnew System::Windows::Forms::TextBox());
			this->txt_payement = (gcnew System::Windows::Forms::TextBox());
			this->txt_pay = (gcnew System::Windows::Forms::TextBox());
			this->txt_regl = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva = (gcnew System::Windows::Forms::TextBox());
			this->txt_ttc = (gcnew System::Windows::Forms::TextBox());
			this->txt_article = (gcnew System::Windows::Forms::TextBox());
			this->txt_quantite = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->btn_facture = (gcnew System::Windows::Forms::Button());
			this->label_client = (gcnew System::Windows::Forms::Label());
			this->txt_client = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_ID = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_date = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_pay = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_article = (gcnew System::Windows::Forms::GroupBox());
			this->txt_article4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_article3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_article2 = (gcnew System::Windows::Forms::TextBox());
			this->label_article4 = (gcnew System::Windows::Forms::Label());
			this->label_article3 = (gcnew System::Windows::Forms::Label());
			this->label_article2 = (gcnew System::Windows::Forms::Label());
			this->groupBox_client = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->groupBox_ID->SuspendLayout();
			this->groupBox_date->SuspendLayout();
			this->groupBox_pay->SuspendLayout();
			this->groupBox_article->SuspendLayout();
			this->groupBox_client->SuspendLayout();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form4::btn_exit_Click);
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(54, 45);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(21, 17);
			this->label_id->TabIndex = 12;
			this->label_id->Text = L"ID";
			this->label_id->Click += gcnew System::EventHandler(this, &Form4::label_id_Click);
			// 
			// label_ref
			// 
			this->label_ref->AutoSize = true;
			this->label_ref->Location = System::Drawing::Point(6, 107);
			this->label_ref->Name = L"label_ref";
			this->label_ref->Size = System::Drawing::Size(69, 17);
			this->label_ref->TabIndex = 13;
			this->label_ref->Text = L"reference";
			this->label_ref->Click += gcnew System::EventHandler(this, &Form4::label_ref_Click);
			// 
			// label_livraison
			// 
			this->label_livraison->AutoSize = true;
			this->label_livraison->Location = System::Drawing::Point(6, 96);
			this->label_livraison->Name = L"label_livraison";
			this->label_livraison->Size = System::Drawing::Size(96, 17);
			this->label_livraison->TabIndex = 14;
			this->label_livraison->Text = L"date_livraison";
			this->label_livraison->Click += gcnew System::EventHandler(this, &Form4::label_livraison_Click);
			// 
			// label_emission
			// 
			this->label_emission->AutoSize = true;
			this->label_emission->Location = System::Drawing::Point(6, 46);
			this->label_emission->Name = L"label_emission";
			this->label_emission->Size = System::Drawing::Size(99, 17);
			this->label_emission->TabIndex = 15;
			this->label_emission->Text = L"date_emission";
			this->label_emission->Click += gcnew System::EventHandler(this, &Form4::label_emission_Click);
			// 
			// label_payement
			// 
			this->label_payement->AutoSize = true;
			this->label_payement->Location = System::Drawing::Point(6, 141);
			this->label_payement->Name = L"label_payement";
			this->label_payement->Size = System::Drawing::Size(106, 17);
			this->label_payement->TabIndex = 16;
			this->label_payement->Text = L"date_payement";
			this->label_payement->Click += gcnew System::EventHandler(this, &Form4::label_payement_Click);
			// 
			// label_pay
			// 
			this->label_pay->AutoSize = true;
			this->label_pay->Location = System::Drawing::Point(6, 45);
			this->label_pay->Name = L"label_pay";
			this->label_pay->Size = System::Drawing::Size(120, 17);
			this->label_pay->TabIndex = 17;
			this->label_pay->Text = L"moyen_payement";
			this->label_pay->Click += gcnew System::EventHandler(this, &Form4::label_pay_Click);
			// 
			// label_ht
			// 
			this->label_ht->AutoSize = true;
			this->label_ht->Location = System::Drawing::Point(6, 123);
			this->label_ht->Name = L"label_ht";
			this->label_ht->Size = System::Drawing::Size(79, 17);
			this->label_ht->TabIndex = 18;
			this->label_ht->Text = L"montant_ht";
			this->label_ht->Click += gcnew System::EventHandler(this, &Form4::label_ht_Click);
			// 
			// label_tva
			// 
			this->label_tva->AutoSize = true;
			this->label_tva->Location = System::Drawing::Point(6, 165);
			this->label_tva->Name = L"label_tva";
			this->label_tva->Size = System::Drawing::Size(86, 17);
			this->label_tva->TabIndex = 19;
			this->label_tva->Text = L"montant_tva";
			this->label_tva->Click += gcnew System::EventHandler(this, &Form4::label_tva_Click);
			// 
			// label_quantite
			// 
			this->label_quantite->AutoSize = true;
			this->label_quantite->Location = System::Drawing::Point(47, 210);
			this->label_quantite->Name = L"label_quantite";
			this->label_quantite->Size = System::Drawing::Size(140, 17);
			this->label_quantite->TabIndex = 20;
			this->label_quantite->Text = L"quantite_article_total";
			this->label_quantite->Click += gcnew System::EventHandler(this, &Form4::label_quantite_Click);
			// 
			// label_article
			// 
			this->label_article->AutoSize = true;
			this->label_article->Location = System::Drawing::Point(14, 39);
			this->label_article->Name = L"label_article";
			this->label_article->Size = System::Drawing::Size(173, 17);
			this->label_article->TabIndex = 21;
			this->label_article->Text = L"quantite_bouton_poussoir";
			this->label_article->Click += gcnew System::EventHandler(this, &Form4::label_article_Click);
			// 
			// label_regl
			// 
			this->label_regl->AutoSize = true;
			this->label_regl->Location = System::Drawing::Point(6, 83);
			this->label_regl->Name = L"label_regl";
			this->label_regl->Size = System::Drawing::Size(113, 17);
			this->label_regl->TabIndex = 22;
			this->label_regl->Text = L"solde_reglement";
			this->label_regl->Click += gcnew System::EventHandler(this, &Form4::label_regl_Click);
			// 
			// label_ttc
			// 
			this->label_ttc->AutoSize = true;
			this->label_ttc->Location = System::Drawing::Point(6, 212);
			this->label_ttc->Name = L"label_ttc";
			this->label_ttc->Size = System::Drawing::Size(82, 17);
			this->label_ttc->TabIndex = 23;
			this->label_ttc->Text = L"montant_ttc";
			this->label_ttc->Click += gcnew System::EventHandler(this, &Form4::label_ttc_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(81, 45);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(135, 22);
			this->txt_id->TabIndex = 24;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form4::txt_id_TextChanged);
			// 
			// txt_ref
			// 
			this->txt_ref->Location = System::Drawing::Point(81, 107);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->Size = System::Drawing::Size(135, 22);
			this->txt_ref->TabIndex = 25;
			this->txt_ref->TextChanged += gcnew System::EventHandler(this, &Form4::txt_ref_TextChanged);
			// 
			// txt_livraison
			// 
			this->txt_livraison->Location = System::Drawing::Point(111, 93);
			this->txt_livraison->Name = L"txt_livraison";
			this->txt_livraison->Size = System::Drawing::Size(135, 22);
			this->txt_livraison->TabIndex = 26;
			this->txt_livraison->TextChanged += gcnew System::EventHandler(this, &Form4::txt_livraison_TextChanged);
			// 
			// txt_emission
			// 
			this->txt_emission->Location = System::Drawing::Point(111, 46);
			this->txt_emission->Name = L"txt_emission";
			this->txt_emission->Size = System::Drawing::Size(135, 22);
			this->txt_emission->TabIndex = 27;
			this->txt_emission->TextChanged += gcnew System::EventHandler(this, &Form4::txt_emission_TextChanged);
			// 
			// txt_payement
			// 
			this->txt_payement->Location = System::Drawing::Point(111, 141);
			this->txt_payement->Name = L"txt_payement";
			this->txt_payement->Size = System::Drawing::Size(135, 22);
			this->txt_payement->TabIndex = 28;
			this->txt_payement->TextChanged += gcnew System::EventHandler(this, &Form4::txt_payement_TextChanged);
			// 
			// txt_pay
			// 
			this->txt_pay->Location = System::Drawing::Point(132, 45);
			this->txt_pay->Name = L"txt_pay";
			this->txt_pay->Size = System::Drawing::Size(142, 22);
			this->txt_pay->TabIndex = 29;
			this->txt_pay->TextChanged += gcnew System::EventHandler(this, &Form4::txt_pay_TextChanged);
			// 
			// txt_regl
			// 
			this->txt_regl->Location = System::Drawing::Point(132, 83);
			this->txt_regl->Name = L"txt_regl";
			this->txt_regl->Size = System::Drawing::Size(142, 22);
			this->txt_regl->TabIndex = 30;
			this->txt_regl->TextChanged += gcnew System::EventHandler(this, &Form4::txt_regl_TextChanged);
			// 
			// txt_ht
			// 
			this->txt_ht->Location = System::Drawing::Point(132, 118);
			this->txt_ht->Name = L"txt_ht";
			this->txt_ht->Size = System::Drawing::Size(142, 22);
			this->txt_ht->TabIndex = 31;
			this->txt_ht->TextChanged += gcnew System::EventHandler(this, &Form4::txt_ht_TextChanged);
			// 
			// txt_tva
			// 
			this->txt_tva->Location = System::Drawing::Point(132, 165);
			this->txt_tva->Name = L"txt_tva";
			this->txt_tva->Size = System::Drawing::Size(142, 22);
			this->txt_tva->TabIndex = 32;
			this->txt_tva->TextChanged += gcnew System::EventHandler(this, &Form4::txt_tva_TextChanged);
			// 
			// txt_ttc
			// 
			this->txt_ttc->Location = System::Drawing::Point(132, 209);
			this->txt_ttc->Name = L"txt_ttc";
			this->txt_ttc->Size = System::Drawing::Size(142, 22);
			this->txt_ttc->TabIndex = 33;
			this->txt_ttc->TextChanged += gcnew System::EventHandler(this, &Form4::txt_ttc_TextChanged);
			// 
			// txt_article
			// 
			this->txt_article->Location = System::Drawing::Point(228, 34);
			this->txt_article->Name = L"txt_article";
			this->txt_article->Size = System::Drawing::Size(121, 22);
			this->txt_article->TabIndex = 34;
			this->txt_article->TextChanged += gcnew System::EventHandler(this, &Form4::txt_article_TextChanged);
			// 
			// txt_quantite
			// 
			this->txt_quantite->Location = System::Drawing::Point(228, 207);
			this->txt_quantite->Name = L"txt_quantite";
			this->txt_quantite->Size = System::Drawing::Size(121, 22);
			this->txt_quantite->TabIndex = 35;
			this->txt_quantite->TextChanged += gcnew System::EventHandler(this, &Form4::txt_quantite_TextChanged);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(445, 455);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form4::btn_valider_Click);
			// 
			// btn_facture
			// 
			this->btn_facture->Location = System::Drawing::Point(1117, 60);
			this->btn_facture->Name = L"btn_facture";
			this->btn_facture->Size = System::Drawing::Size(203, 44);
			this->btn_facture->TabIndex = 37;
			this->btn_facture->Text = L"facture";
			this->btn_facture->UseVisualStyleBackColor = true;
			this->btn_facture->Click += gcnew System::EventHandler(this, &Form4::btn_facture_Click);
			// 
			// label_client
			// 
			this->label_client->AutoSize = true;
			this->label_client->Location = System::Drawing::Point(17, 51);
			this->label_client->Name = L"label_client";
			this->label_client->Size = System::Drawing::Size(76, 17);
			this->label_client->TabIndex = 38;
			this->label_client->Text = L"nom_client";
			this->label_client->Click += gcnew System::EventHandler(this, &Form4::label_client_Click);
			// 
			// txt_client
			// 
			this->txt_client->Location = System::Drawing::Point(99, 48);
			this->txt_client->Name = L"txt_client";
			this->txt_client->Size = System::Drawing::Size(138, 22);
			this->txt_client->TabIndex = 39;
			this->txt_client->TextChanged += gcnew System::EventHandler(this, &Form4::txt_client_TextChanged);
			// 
			// groupBox_ID
			// 
			this->groupBox_ID->Controls->Add(this->label_id);
			this->groupBox_ID->Controls->Add(this->txt_id);
			this->groupBox_ID->Controls->Add(this->label_ref);
			this->groupBox_ID->Controls->Add(this->txt_ref);
			this->groupBox_ID->Location = System::Drawing::Point(15, 72);
			this->groupBox_ID->Name = L"groupBox_ID";
			this->groupBox_ID->Size = System::Drawing::Size(265, 161);
			this->groupBox_ID->TabIndex = 40;
			this->groupBox_ID->TabStop = false;
			this->groupBox_ID->Text = L"Identification";
			this->groupBox_ID->Enter += gcnew System::EventHandler(this, &Form4::groupBox_ID_Enter);
			// 
			// groupBox_date
			// 
			this->groupBox_date->Controls->Add(this->label_emission);
			this->groupBox_date->Controls->Add(this->txt_emission);
			this->groupBox_date->Controls->Add(this->label_livraison);
			this->groupBox_date->Controls->Add(this->txt_livraison);
			this->groupBox_date->Controls->Add(this->label_payement);
			this->groupBox_date->Controls->Add(this->txt_payement);
			this->groupBox_date->Location = System::Drawing::Point(15, 299);
			this->groupBox_date->Name = L"groupBox_date";
			this->groupBox_date->Size = System::Drawing::Size(265, 192);
			this->groupBox_date->TabIndex = 41;
			this->groupBox_date->TabStop = false;
			this->groupBox_date->Text = L"Date";
			this->groupBox_date->Enter += gcnew System::EventHandler(this, &Form4::groupBox_date_Enter);
			// 
			// groupBox_pay
			// 
			this->groupBox_pay->Controls->Add(this->label_pay);
			this->groupBox_pay->Controls->Add(this->txt_pay);
			this->groupBox_pay->Controls->Add(this->label_regl);
			this->groupBox_pay->Controls->Add(this->txt_regl);
			this->groupBox_pay->Controls->Add(this->label_ht);
			this->groupBox_pay->Controls->Add(this->txt_ht);
			this->groupBox_pay->Controls->Add(this->label_tva);
			this->groupBox_pay->Controls->Add(this->txt_tva);
			this->groupBox_pay->Controls->Add(this->label_ttc);
			this->groupBox_pay->Controls->Add(this->txt_ttc);
			this->groupBox_pay->Location = System::Drawing::Point(342, 72);
			this->groupBox_pay->Name = L"groupBox_pay";
			this->groupBox_pay->Size = System::Drawing::Size(297, 261);
			this->groupBox_pay->TabIndex = 42;
			this->groupBox_pay->TabStop = false;
			this->groupBox_pay->Text = L"payement";
			this->groupBox_pay->Enter += gcnew System::EventHandler(this, &Form4::groupBox_pay_Enter);
			// 
			// groupBox_article
			// 
			this->groupBox_article->Controls->Add(this->txt_article4);
			this->groupBox_article->Controls->Add(this->txt_article3);
			this->groupBox_article->Controls->Add(this->txt_article2);
			this->groupBox_article->Controls->Add(this->label_article4);
			this->groupBox_article->Controls->Add(this->label_article3);
			this->groupBox_article->Controls->Add(this->label_article2);
			this->groupBox_article->Controls->Add(this->label_article);
			this->groupBox_article->Controls->Add(this->txt_article);
			this->groupBox_article->Controls->Add(this->txt_quantite);
			this->groupBox_article->Controls->Add(this->label_quantite);
			this->groupBox_article->Location = System::Drawing::Point(675, 72);
			this->groupBox_article->Name = L"groupBox_article";
			this->groupBox_article->Size = System::Drawing::Size(416, 261);
			this->groupBox_article->TabIndex = 43;
			this->groupBox_article->TabStop = false;
			this->groupBox_article->Text = L"Article";
			this->groupBox_article->Enter += gcnew System::EventHandler(this, &Form4::groupBox_article_Enter);
			// 
			// txt_article4
			// 
			this->txt_article4->Location = System::Drawing::Point(228, 160);
			this->txt_article4->Name = L"txt_article4";
			this->txt_article4->Size = System::Drawing::Size(121, 22);
			this->txt_article4->TabIndex = 48;
			this->txt_article4->TextChanged += gcnew System::EventHandler(this, &Form4::txt_article4_TextChanged);
			// 
			// txt_article3
			// 
			this->txt_article3->Location = System::Drawing::Point(228, 118);
			this->txt_article3->Name = L"txt_article3";
			this->txt_article3->Size = System::Drawing::Size(121, 22);
			this->txt_article3->TabIndex = 47;
			this->txt_article3->TextChanged += gcnew System::EventHandler(this, &Form4::txt_article3_TextChanged);
			// 
			// txt_article2
			// 
			this->txt_article2->Location = System::Drawing::Point(228, 72);
			this->txt_article2->Name = L"txt_article2";
			this->txt_article2->Size = System::Drawing::Size(121, 22);
			this->txt_article2->TabIndex = 46;
			this->txt_article2->TextChanged += gcnew System::EventHandler(this, &Form4::txt_article2_TextChanged);
			// 
			// label_article4
			// 
			this->label_article4->AutoSize = true;
			this->label_article4->Location = System::Drawing::Point(55, 165);
			this->label_article4->Name = L"label_article4";
			this->label_article4->Size = System::Drawing::Size(132, 17);
			this->label_article4->TabIndex = 45;
			this->label_article4->Text = L"quantite_resistance";
			this->label_article4->Click += gcnew System::EventHandler(this, &Form4::label_article4_Click);
			// 
			// label_article3
			// 
			this->label_article3->AutoSize = true;
			this->label_article3->Location = System::Drawing::Point(38, 121);
			this->label_article3->Name = L"label_article3";
			this->label_article3->Size = System::Drawing::Size(149, 17);
			this->label_article3->TabIndex = 44;
			this->label_article3->Text = L"quantite_afficheur_led";
			this->label_article3->Click += gcnew System::EventHandler(this, &Form4::label_article3_Click);
			// 
			// label_article2
			// 
			this->label_article2->AutoSize = true;
			this->label_article2->Location = System::Drawing::Point(27, 72);
			this->label_article2->Name = L"label_article2";
			this->label_article2->Size = System::Drawing::Size(160, 17);
			this->label_article2->TabIndex = 35;
			this->label_article2->Text = L"quantite_multi_vibrateur";
			this->label_article2->Click += gcnew System::EventHandler(this, &Form4::label_article2_Click);
			// 
			// groupBox_client
			// 
			this->groupBox_client->Controls->Add(this->textBox1);
			this->groupBox_client->Controls->Add(this->label_prenom);
			this->groupBox_client->Controls->Add(this->label_client);
			this->groupBox_client->Controls->Add(this->txt_client);
			this->groupBox_client->Location = System::Drawing::Point(1083, 299);
			this->groupBox_client->Name = L"groupBox_client";
			this->groupBox_client->Size = System::Drawing::Size(243, 192);
			this->groupBox_client->TabIndex = 44;
			this->groupBox_client->TabStop = false;
			this->groupBox_client->Text = L"Client";
			this->groupBox_client->Enter += gcnew System::EventHandler(this, &Form4::groupBox_client_Enter);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 22);
			this->textBox1->TabIndex = 41;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form4::textBox1_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(6, 96);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(97, 17);
			this->label_prenom->TabIndex = 40;
			this->label_prenom->Text = L"prenom_client";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form4::label_prenom_Click);
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1338, 514);
			this->Controls->Add(this->groupBox_client);
			this->Controls->Add(this->groupBox_article);
			this->Controls->Add(this->groupBox_pay);
			this->Controls->Add(this->groupBox_date);
			this->Controls->Add(this->groupBox_ID);
			this->Controls->Add(this->btn_facture);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form4";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			this->groupBox_ID->ResumeLayout(false);
			this->groupBox_ID->PerformLayout();
			this->groupBox_date->ResumeLayout(false);
			this->groupBox_date->PerformLayout();
			this->groupBox_pay->ResumeLayout(false);
			this->groupBox_pay->PerformLayout();
			this->groupBox_article->ResumeLayout(false);
			this->groupBox_article->PerformLayout();
			this->groupBox_client->ResumeLayout(false);
			this->groupBox_client->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form4_Load(System::Object^ sender, System::EventArgs^ e)
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
private: System::Void label_ref_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: System::Void txt_ref_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_livraison_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_livraison_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_emission_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_emission_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_payement_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_payement_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_pay_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_pay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_regl_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_regl_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_ht_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ht_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_tva_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_tva_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_ttc_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ttc_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_article_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_quantite_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_quantite_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_facture_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
            this->Hide();
			Form5^ Form = gcnew Form5();
			Form->ShowDialog();
			this->Show();

}
private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SqlConnection^ appli = gcnew SqlConnection(ip);
	appli->Open();
	String^ o = "insert into tab_date(ID,date_livraison,date_emission,date_payement)values('" + txt_id->Text->ToString() + "','" + txt_livraison->Text->ToString() + "','" + txt_emission->Text->ToString() + "','" + txt_payement->Text->ToString() + "')";
	String^ z = "insert into tab_payement(ID,moyen_payement,solde_reglement,montant_ht,montant_tva,montant_ttc,id_date)values('" + txt_id->Text->ToString() + "','" + txt_pay->Text->ToString() + "','" + txt_regl->Text->ToString() + "','" + txt_ht->Text->ToString() + "','" + txt_tva->Text->ToString() + "','" + txt_ttc->Text->ToString() + "','" + txt_id->Text->ToString() + "')";
	String^ q = "insert into tab_commandes(ID,ref_commande,quantite_article,id_date,id_paiement,id_client,quantite_bouton_poussoir,quantite_multi_vibrateur,quantite_afficheur_led,resistance)values('" + txt_id->Text->ToString() + "','" + txt_ref->Text->ToString() + "','" + txt_quantite->Text->ToString() + "','" + txt_id->Text->ToString() + "','" + txt_id->Text->ToString() + "',(select ID from tab_client where tab_client.nom_client='" + txt_client->Text->ToString() + "'),'" + txt_article->Text->ToString() + "','" + txt_article2->Text->ToString() + "','" + txt_article3->Text->ToString() + "','" + txt_article4->Text->ToString() + "')";
	String^ b = "insert into tab_factures(ID,nom_societe,adresse_sociale,id_commandes,id_client)values('" + txt_id->Text->ToString() + "','THAB','	7_rue_diderot_arras','" + txt_id->Text->ToString() + "',(select ID from tab_client where tab_client.nom_client='" + txt_client->Text->ToString() + "'))";
		

     SqlCommand^ cmd = gcnew SqlCommand(q, appli);
	SqlCommand^ cmd1 = gcnew SqlCommand(o, appli);
	SqlCommand^ cmd2= gcnew SqlCommand(z, appli);
	SqlCommand^ cmd3 = gcnew SqlCommand(b, appli);
	
	cmd->ExecuteNonQuery();
	cmd1->ExecuteNonQuery();
	cmd2->ExecuteNonQuery();
	cmd3->ExecuteNonQuery();
	MessageBox::Show("Données inseré dans la BDD");
	
	
}
private: System::Void label_client_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_article2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_article3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_article4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_prenom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_ID_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_date_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_pay_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_article_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_client_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
