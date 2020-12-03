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
	public ref class Form12 : public System::Windows::Forms::Form
	{
	public:
		Form12(void)
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
		~Form12()
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
	private: System::Windows::Forms::TextBox^ txt_num;	

	private: System::Windows::Forms::TextBox^ txt_adresse_livraison;
	private: System::Windows::Forms::TextBox^ txt_adresse_facturation;


	private: System::Windows::Forms::TextBox^ txt_date;

	private: System::Windows::Forms::TextBox^ txt_prenom1;
	private: System::Windows::Forms::TextBox^ txtnom;


	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::CheckBox^ checkBox_num;
	private: System::Windows::Forms::CheckBox^ checkBox_adresse_livraison;
	private: System::Windows::Forms::CheckBox^ checkBox_adresse_facturation;

	private: System::Windows::Forms::CheckBox^ checkBox_date;
	private: System::Windows::Forms::CheckBox^ checkBox_prenom;
	private: System::Windows::Forms::CheckBox^ checkBox_nom;
	private: System::Windows::Forms::CheckBox^ checkBox_id;
	private: System::Windows::Forms::DataGridView^ client_view;
	private: System::Windows::Forms::CheckBox^ checkBox_client;
	private: System::Windows::Forms::Button^ btn_afficher;














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
			this->txt_adresse_facturation = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_donnee = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_num = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_adresse_livraison = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_adresse_facturation = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_date = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_prenom = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_nom = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_id = (gcnew System::Windows::Forms::CheckBox());
			this->txt_num = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse_livraison = (gcnew System::Windows::Forms::TextBox());
			this->txt_date = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom1 = (gcnew System::Windows::Forms::TextBox());
			this->txtnom = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->client_view = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox_client = (gcnew System::Windows::Forms::CheckBox());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->groupBox_modif->SuspendLayout();
			this->groupBox_donnee->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_view))->BeginInit();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form12::btn_exit_Click);
			// 
			// groupBox_modif
			// 
			this->groupBox_modif->Controls->Add(this->txt_prenom);
			this->groupBox_modif->Controls->Add(this->txt_nom);
			this->groupBox_modif->Controls->Add(this->label_prenom);
			this->groupBox_modif->Controls->Add(this->label_nom);
			this->groupBox_modif->Location = System::Drawing::Point(126, 201);
			this->groupBox_modif->Name = L"groupBox_modif";
			this->groupBox_modif->Size = System::Drawing::Size(805, 86);
			this->groupBox_modif->TabIndex = 12;
			this->groupBox_modif->TabStop = false;
			this->groupBox_modif->Text = L"Client à modifier :";
			this->groupBox_modif->Enter += gcnew System::EventHandler(this, &Form12::groupBox_modif_Enter);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(503, 37);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(196, 22);
			this->txt_prenom->TabIndex = 14;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &Form12::txt_prenom_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(112, 31);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(100, 22);
			this->txt_nom->TabIndex = 2;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &Form12::txt_nom_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(413, 37);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(56, 17);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"prenom";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form12::label_prenom_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(32, 37);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form12::label_nom_Click);
			// 
			// txt_adresse_facturation
			// 
			this->txt_adresse_facturation->Location = System::Drawing::Point(608, 158);
			this->txt_adresse_facturation->Name = L"txt_adresse_facturation";
			this->txt_adresse_facturation->Size = System::Drawing::Size(158, 22);
			this->txt_adresse_facturation->TabIndex = 18;
			// 
			// groupBox_donnee
			// 
			this->groupBox_donnee->Controls->Add(this->checkBox_num);
			this->groupBox_donnee->Controls->Add(this->checkBox_adresse_livraison);
			this->groupBox_donnee->Controls->Add(this->checkBox_adresse_facturation);
			this->groupBox_donnee->Controls->Add(this->txt_adresse_facturation);
			this->groupBox_donnee->Controls->Add(this->checkBox_date);
			this->groupBox_donnee->Controls->Add(this->checkBox_prenom);
			this->groupBox_donnee->Controls->Add(this->checkBox_nom);
			this->groupBox_donnee->Controls->Add(this->checkBox_id);
			this->groupBox_donnee->Controls->Add(this->txt_num);
			this->groupBox_donnee->Controls->Add(this->txt_adresse_livraison);
			this->groupBox_donnee->Controls->Add(this->txt_date);
			this->groupBox_donnee->Controls->Add(this->txt_prenom1);
			this->groupBox_donnee->Controls->Add(this->txtnom);
			this->groupBox_donnee->Controls->Add(this->txt_ID);
			this->groupBox_donnee->Location = System::Drawing::Point(126, 313);
			this->groupBox_donnee->Name = L"groupBox_donnee";
			this->groupBox_donnee->Size = System::Drawing::Size(805, 384);
			this->groupBox_donnee->TabIndex = 13;
			this->groupBox_donnee->TabStop = false;
			this->groupBox_donnee->Text = L"nouvelles données:";
			this->groupBox_donnee->Enter += gcnew System::EventHandler(this, &Form12::groupBox_donnee_Enter);
			// 
			// checkBox_num
			// 
			this->checkBox_num->AutoSize = true;
			this->checkBox_num->Location = System::Drawing::Point(506, 319);
			this->checkBox_num->Name = L"checkBox_num";
			this->checkBox_num->Size = System::Drawing::Size(98, 21);
			this->checkBox_num->TabIndex = 17;
			this->checkBox_num->Text = L"num_client";
			this->checkBox_num->UseVisualStyleBackColor = true;
			this->checkBox_num->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_num_CheckedChanged);
			// 
			// checkBox_adresse_livraison
			// 
			this->checkBox_adresse_livraison->AutoSize = true;
			this->checkBox_adresse_livraison->Location = System::Drawing::Point(461, 248);
			this->checkBox_adresse_livraison->Name = L"checkBox_adresse_livraison";
			this->checkBox_adresse_livraison->Size = System::Drawing::Size(141, 21);
			this->checkBox_adresse_livraison->TabIndex = 16;
			this->checkBox_adresse_livraison->Text = L"adresse_livraison";
			this->checkBox_adresse_livraison->UseVisualStyleBackColor = true;
			this->checkBox_adresse_livraison->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_adresse_livraison_CheckedChanged);
			// 
			// checkBox_adresse_facturation
			// 
			this->checkBox_adresse_facturation->AutoSize = true;
			this->checkBox_adresse_facturation->Location = System::Drawing::Point(446, 158);
			this->checkBox_adresse_facturation->Name = L"checkBox_adresse_facturation";
			this->checkBox_adresse_facturation->Size = System::Drawing::Size(156, 21);
			this->checkBox_adresse_facturation->TabIndex = 16;
			this->checkBox_adresse_facturation->Text = L"adresse_facturation";
			this->checkBox_adresse_facturation->UseVisualStyleBackColor = true;
			this->checkBox_adresse_facturation->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_adresse_facturation_CheckedChanged);
			// 
			// checkBox_date
			// 
			this->checkBox_date->AutoSize = true;
			this->checkBox_date->Location = System::Drawing::Point(448, 76);
			this->checkBox_date->Name = L"checkBox_date";
			this->checkBox_date->Size = System::Drawing::Size(154, 21);
			this->checkBox_date->TabIndex = 15;
			this->checkBox_date->Text = L"date_de_naissance";
			this->checkBox_date->UseVisualStyleBackColor = true;
			this->checkBox_date->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_date_CheckedChanged);
			// 
			// checkBox_prenom
			// 
			this->checkBox_prenom->AutoSize = true;
			this->checkBox_prenom->Location = System::Drawing::Point(80, 320);
			this->checkBox_prenom->Name = L"checkBox_prenom";
			this->checkBox_prenom->Size = System::Drawing::Size(78, 21);
			this->checkBox_prenom->TabIndex = 14;
			this->checkBox_prenom->Text = L"prenom";
			this->checkBox_prenom->UseVisualStyleBackColor = true;
			this->checkBox_prenom->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_prenom_CheckedChanged);
			// 
			// checkBox_nom
			// 
			this->checkBox_nom->AutoSize = true;
			this->checkBox_nom->Location = System::Drawing::Point(80, 193);
			this->checkBox_nom->Name = L"checkBox_nom";
			this->checkBox_nom->Size = System::Drawing::Size(57, 21);
			this->checkBox_nom->TabIndex = 13;
			this->checkBox_nom->Text = L"nom";
			this->checkBox_nom->UseVisualStyleBackColor = true;
			this->checkBox_nom->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_nom_CheckedChanged);
			// 
			// checkBox_id
			// 
			this->checkBox_id->AutoSize = true;
			this->checkBox_id->Location = System::Drawing::Point(80, 73);
			this->checkBox_id->Name = L"checkBox_id";
			this->checkBox_id->Size = System::Drawing::Size(43, 21);
			this->checkBox_id->TabIndex = 12;
			this->checkBox_id->Text = L"ID";
			this->checkBox_id->UseVisualStyleBackColor = true;
			this->checkBox_id->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_id_CheckedChanged);
			// 
			// txt_num
			// 
			this->txt_num->Location = System::Drawing::Point(610, 317);
			this->txt_num->Name = L"txt_num";
			this->txt_num->Size = System::Drawing::Size(158, 22);
			this->txt_num->TabIndex = 11;
			this->txt_num->TextChanged += gcnew System::EventHandler(this, &Form12::txt_num_TextChanged);
			// 
			// txt_adresse_livraison
			// 
			this->txt_adresse_livraison->Location = System::Drawing::Point(610, 247);
			this->txt_adresse_livraison->Name = L"txt_adresse_livraison";
			this->txt_adresse_livraison->Size = System::Drawing::Size(158, 22);
			this->txt_adresse_livraison->TabIndex = 10;
			this->txt_adresse_livraison->TextChanged += gcnew System::EventHandler(this, &Form12::txt_adresse_facturation_TextChanged);
			// 
			// txt_date
			// 
			this->txt_date->Location = System::Drawing::Point(608, 76);
			this->txt_date->Name = L"txt_date";
			this->txt_date->Size = System::Drawing::Size(158, 22);
			this->txt_date->TabIndex = 9;
			this->txt_date->TextChanged += gcnew System::EventHandler(this, &Form12::txt_date_TextChanged);
			// 
			// txt_prenom1
			// 
			this->txt_prenom1->Location = System::Drawing::Point(193, 329);
			this->txt_prenom1->Name = L"txt_prenom1";
			this->txt_prenom1->Size = System::Drawing::Size(148, 22);
			this->txt_prenom1->TabIndex = 8;
			this->txt_prenom1->TextChanged += gcnew System::EventHandler(this, &Form12::txt_prenom1_TextChanged);
			// 
			// txtnom
			// 
			this->txtnom->Location = System::Drawing::Point(193, 193);
			this->txtnom->Name = L"txtnom";
			this->txtnom->Size = System::Drawing::Size(148, 22);
			this->txtnom->TabIndex = 7;
			this->txtnom->TextChanged += gcnew System::EventHandler(this, &Form12::txtnom_TextChanged);
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(193, 76);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(148, 22);
			this->txt_ID->TabIndex = 6;
			this->txt_ID->TextChanged += gcnew System::EventHandler(this, &Form12::txt_ID_TextChanged);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(328, 722);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form12::btn_valider_Click);
			// 
			// client_view
			// 
			this->client_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->client_view->Location = System::Drawing::Point(346, 12);
			this->client_view->Name = L"client_view";
			this->client_view->RowHeadersWidth = 51;
			this->client_view->RowTemplate->Height = 24;
			this->client_view->Size = System::Drawing::Size(725, 183);
			this->client_view->TabIndex = 37;
			this->client_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form12::client_view_CellContentClick);
			// 
			// checkBox_client
			// 
			this->checkBox_client->AutoSize = true;
			this->checkBox_client->Location = System::Drawing::Point(39, 85);
			this->checkBox_client->Name = L"checkBox_client";
			this->checkBox_client->Size = System::Drawing::Size(143, 21);
			this->checkBox_client->TabIndex = 38;
			this->checkBox_client->Text = L"afficher les clients";
			this->checkBox_client->UseVisualStyleBackColor = true;
			this->checkBox_client->CheckedChanged += gcnew System::EventHandler(this, &Form12::checkBox_client_CheckedChanged);
			// 
			// btn_afficher
			// 
			this->btn_afficher->Location = System::Drawing::Point(206, 83);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(75, 23);
			this->btn_afficher->TabIndex = 39;
			this->btn_afficher->Text = L"afficher";
			this->btn_afficher->UseVisualStyleBackColor = true;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &Form12::btn_afficher_Click);
			// 
			// Form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 805);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->checkBox_client);
			this->Controls->Add(this->client_view);
			this->Controls->Add(this->groupBox_donnee);
			this->Controls->Add(this->groupBox_modif);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_valider);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form12";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form12::Form11_Load);
			this->groupBox_modif->ResumeLayout(false);
			this->groupBox_modif->PerformLayout();
			this->groupBox_donnee->ResumeLayout(false);
			this->groupBox_donnee->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_view))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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
			SqlCommand^ cmd6= gcnew SqlCommand(f, appli);
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
	

	}

	private: System::Void checkBox_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->checkBox_client->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();

		String^ z = "select* from tab_client ";
		SqlDataAdapter^ sda5 = gcnew SqlDataAdapter(z, appli);
		DataTable^ dt5 = gcnew DataTable();
		sda5->Fill(dt5);
		client_view->DataSource = dt5;
	}
}
private: System::Void client_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{

}
};
}
