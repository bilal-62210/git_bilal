#pragma once
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
	/// Description résumée de Form15
	/// </summary>
	public ref class Form17 : public System::Windows::Forms::Form
	{
	public:
		Form17(void)
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
		~Form17()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int index;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_valider;
	private: System::Windows::Forms::DataGridView^ commande_view;

	private: System::Windows::Forms::CheckBox^ checkBox_spe;
	private: System::Windows::Forms::CheckBox^ checkBox_complet;
	private: System::Windows::Forms::TextBox^ textBox_spe;
	private: System::Windows::Forms::GroupBox^ groupBox_identite;
	private: System::Windows::Forms::TextBox^ textBox_ref;
	private: System::Windows::Forms::Label^ label_ref;

	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::DataGridView^ article_view;
	private: System::Windows::Forms::DataGridView^ date_view;
	private: System::Windows::Forms::DataGridView^ payement_view;
	private: System::Windows::Forms::DataGridView^ client_view;
	private: System::Windows::Forms::GroupBox^ groupBox_article;
	private: System::Windows::Forms::GroupBox^ groupBox_dates;


	private: System::Windows::Forms::GroupBox^ groupBox_commande;
	private: System::Windows::Forms::GroupBox^ groupBox_clients;
	private: System::Windows::Forms::GroupBox^ groupBox_payement;


	private: System::Windows::Forms::TextBox^ txt_client;
	private: System::Windows::Forms::Label^ label_client;













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
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->commande_view = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox_spe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_complet = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_spe = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_identite = (gcnew System::Windows::Forms::GroupBox());
			this->txt_client = (gcnew System::Windows::Forms::TextBox());
			this->label_client = (gcnew System::Windows::Forms::Label());
			this->textBox_ref = (gcnew System::Windows::Forms::TextBox());
			this->label_ref = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->article_view = (gcnew System::Windows::Forms::DataGridView());
			this->date_view = (gcnew System::Windows::Forms::DataGridView());
			this->payement_view = (gcnew System::Windows::Forms::DataGridView());
			this->client_view = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox_article = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_dates = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_commande = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_clients = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_payement = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->commande_view))->BeginInit();
			this->groupBox_identite->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->article_view))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->date_view))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->payement_view))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_view))->BeginInit();
			this->groupBox_article->SuspendLayout();
			this->groupBox_dates->SuspendLayout();
			this->groupBox_commande->SuspendLayout();
			this->groupBox_clients->SuspendLayout();
			this->groupBox_payement->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->ForeColor = System::Drawing::Color::Blue;
			this->btn_exit->Location = System::Drawing::Point(12, 12);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(100, 25);
			this->btn_exit->TabIndex = 11;
			this->btn_exit->Text = L"Retour";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form17::btn_exit_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Location = System::Drawing::Point(347, 675);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(414, 49);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"Afficher";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form17::btn_valider_Click);
			// 
			// commande_view
			// 
			this->commande_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->commande_view->Location = System::Drawing::Point(6, 21);
			this->commande_view->Name = L"commande_view";
			this->commande_view->RowHeadersWidth = 51;
			this->commande_view->RowTemplate->Height = 24;
			this->commande_view->Size = System::Drawing::Size(900, 221);
			this->commande_view->TabIndex = 37;
			this->commande_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form17::commande_view_CellContentClick);
			// 
			// checkBox_spe
			// 
			this->checkBox_spe->AutoSize = true;
			this->checkBox_spe->Location = System::Drawing::Point(167, 62);
			this->checkBox_spe->Name = L"checkBox_spe";
			this->checkBox_spe->Size = System::Drawing::Size(171, 21);
			this->checkBox_spe->TabIndex = 38;
			this->checkBox_spe->Text = L"commande_specifique";
			this->checkBox_spe->UseVisualStyleBackColor = true;
			this->checkBox_spe->CheckedChanged += gcnew System::EventHandler(this, &Form17::checkBox_spe_CheckedChanged);
			// 
			// checkBox_complet
			// 
			this->checkBox_complet->AutoSize = true;
			this->checkBox_complet->Location = System::Drawing::Point(974, 62);
			this->checkBox_complet->Name = L"checkBox_complet";
			this->checkBox_complet->Size = System::Drawing::Size(202, 21);
			this->checkBox_complet->TabIndex = 39;
			this->checkBox_complet->Text = L"table_commandes_complet";
			this->checkBox_complet->UseVisualStyleBackColor = true;
			this->checkBox_complet->CheckedChanged += gcnew System::EventHandler(this, &Form17::checkBox_complet_CheckedChanged);
			// 
			// textBox_spe
			// 
			this->textBox_spe->Location = System::Drawing::Point(109, 34);
			this->textBox_spe->Name = L"textBox_spe";
			this->textBox_spe->Size = System::Drawing::Size(100, 22);
			this->textBox_spe->TabIndex = 40;
			this->textBox_spe->TextChanged += gcnew System::EventHandler(this, &Form17::textBox_spe_TextChanged);
			// 
			// groupBox_identite
			// 
			this->groupBox_identite->Controls->Add(this->txt_client);
			this->groupBox_identite->Controls->Add(this->label_client);
			this->groupBox_identite->Controls->Add(this->textBox_ref);
			this->groupBox_identite->Controls->Add(this->label_ref);
			this->groupBox_identite->Controls->Add(this->label_nom);
			this->groupBox_identite->Controls->Add(this->textBox_spe);
			this->groupBox_identite->Location = System::Drawing::Point(347, 12);
			this->groupBox_identite->Name = L"groupBox_identite";
			this->groupBox_identite->Size = System::Drawing::Size(497, 128);
			this->groupBox_identite->TabIndex = 41;
			this->groupBox_identite->TabStop = false;
			this->groupBox_identite->Text = L"Identité";
			this->groupBox_identite->Enter += gcnew System::EventHandler(this, &Form17::groupBox_identite_Enter);
			// 
			// txt_client
			// 
			this->txt_client->Location = System::Drawing::Point(364, 59);
			this->txt_client->Name = L"txt_client";
			this->txt_client->Size = System::Drawing::Size(100, 22);
			this->txt_client->TabIndex = 54;
			this->txt_client->TextChanged += gcnew System::EventHandler(this, &Form17::txt_client_TextChanged);
			// 
			// label_client
			// 
			this->label_client->AutoSize = true;
			this->label_client->Location = System::Drawing::Point(286, 64);
			this->label_client->Name = L"label_client";
			this->label_client->Size = System::Drawing::Size(62, 17);
			this->label_client->TabIndex = 53;
			this->label_client->Text = L"ID_client";
			this->label_client->Click += gcnew System::EventHandler(this, &Form17::label_client_Click);
			// 
			// textBox_ref
			// 
			this->textBox_ref->Location = System::Drawing::Point(109, 84);
			this->textBox_ref->Name = L"textBox_ref";
			this->textBox_ref->Size = System::Drawing::Size(100, 22);
			this->textBox_ref->TabIndex = 43;
			this->textBox_ref->TextChanged += gcnew System::EventHandler(this, &Form17::textBox_ref_TextChanged);
			// 
			// label_ref
			// 
			this->label_ref->AutoSize = true;
			this->label_ref->Location = System::Drawing::Point(30, 87);
			this->label_ref->Name = L"label_ref";
			this->label_ref->Size = System::Drawing::Size(69, 17);
			this->label_ref->TabIndex = 42;
			this->label_ref->Text = L"reference";
			this->label_ref->Click += gcnew System::EventHandler(this, &Form17::label_ref_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(30, 34);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(21, 17);
			this->label_nom->TabIndex = 41;
			this->label_nom->Text = L"ID";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form17::label_nom_Click);
			// 
			// article_view
			// 
			this->article_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->article_view->Location = System::Drawing::Point(6, 21);
			this->article_view->Name = L"article_view";
			this->article_view->RowHeadersWidth = 51;
			this->article_view->RowTemplate->Height = 24;
			this->article_view->Size = System::Drawing::Size(415, 218);
			this->article_view->TabIndex = 42;
			this->article_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form17::article_view_CellContentClick);
			// 
			// date_view
			// 
			this->date_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->date_view->Location = System::Drawing::Point(6, 21);
			this->date_view->Name = L"date_view";
			this->date_view->RowHeadersWidth = 51;
			this->date_view->RowTemplate->Height = 24;
			this->date_view->Size = System::Drawing::Size(447, 226);
			this->date_view->TabIndex = 43;
			this->date_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form17::date_view_CellContentClick);
			// 
			// payement_view
			// 
			this->payement_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->payement_view->Location = System::Drawing::Point(21, 21);
			this->payement_view->Name = L"payement_view";
			this->payement_view->RowHeadersWidth = 51;
			this->payement_view->RowTemplate->Height = 24;
			this->payement_view->Size = System::Drawing::Size(504, 218);
			this->payement_view->TabIndex = 44;
			this->payement_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form17::payement_view_CellContentClick);
			// 
			// client_view
			// 
			this->client_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->client_view->Location = System::Drawing::Point(21, 21);
			this->client_view->Name = L"client_view";
			this->client_view->RowHeadersWidth = 51;
			this->client_view->RowTemplate->Height = 24;
			this->client_view->Size = System::Drawing::Size(504, 221);
			this->client_view->TabIndex = 45;
			this->client_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form17::client_view_CellContentClick);
			// 
			// groupBox_article
			// 
			this->groupBox_article->Controls->Add(this->article_view);
			this->groupBox_article->Location = System::Drawing::Point(12, 406);
			this->groupBox_article->Name = L"groupBox_article";
			this->groupBox_article->Size = System::Drawing::Size(427, 253);
			this->groupBox_article->TabIndex = 46;
			this->groupBox_article->TabStop = false;
			this->groupBox_article->Text = L"catalogue";
			this->groupBox_article->Enter += gcnew System::EventHandler(this, &Form17::groupBox_article_Enter);
			// 
			// groupBox_dates
			// 
			this->groupBox_dates->Controls->Add(this->date_view);
			this->groupBox_dates->Location = System::Drawing::Point(465, 406);
			this->groupBox_dates->Name = L"groupBox_dates";
			this->groupBox_dates->Size = System::Drawing::Size(465, 253);
			this->groupBox_dates->TabIndex = 47;
			this->groupBox_dates->TabStop = false;
			this->groupBox_dates->Text = L"dates";
			this->groupBox_dates->Enter += gcnew System::EventHandler(this, &Form17::groupBox_dates_Enter);
			// 
			// groupBox_commande
			// 
			this->groupBox_commande->Controls->Add(this->commande_view);
			this->groupBox_commande->Location = System::Drawing::Point(12, 146);
			this->groupBox_commande->Name = L"groupBox_commande";
			this->groupBox_commande->Size = System::Drawing::Size(918, 254);
			this->groupBox_commande->TabIndex = 48;
			this->groupBox_commande->TabStop = false;
			this->groupBox_commande->Text = L"Commandes";
			this->groupBox_commande->Enter += gcnew System::EventHandler(this, &Form17::groupBox_commande_Enter);
			// 
			// groupBox_clients
			// 
			this->groupBox_clients->Controls->Add(this->client_view);
			this->groupBox_clients->Location = System::Drawing::Point(953, 146);
			this->groupBox_clients->Name = L"groupBox_clients";
			this->groupBox_clients->Size = System::Drawing::Size(542, 254);
			this->groupBox_clients->TabIndex = 49;
			this->groupBox_clients->TabStop = false;
			this->groupBox_clients->Text = L"clients";
			this->groupBox_clients->Enter += gcnew System::EventHandler(this, &Form17::groupBox_clients_Enter);
			// 
			// groupBox_payement
			// 
			this->groupBox_payement->Controls->Add(this->payement_view);
			this->groupBox_payement->Location = System::Drawing::Point(953, 406);
			this->groupBox_payement->Name = L"groupBox_payement";
			this->groupBox_payement->Size = System::Drawing::Size(542, 253);
			this->groupBox_payement->TabIndex = 50;
			this->groupBox_payement->TabStop = false;
			this->groupBox_payement->Text = L"payements";
			this->groupBox_payement->Enter += gcnew System::EventHandler(this, &Form17::groupBox_payement_Enter);
			// 
			// Form17
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1815, 764);
			this->Controls->Add(this->groupBox_payement);
			this->Controls->Add(this->groupBox_clients);
			this->Controls->Add(this->groupBox_commande);
			this->Controls->Add(this->groupBox_dates);
			this->Controls->Add(this->groupBox_article);
			this->Controls->Add(this->groupBox_identite);
			this->Controls->Add(this->checkBox_complet);
			this->Controls->Add(this->checkBox_spe);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form17";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form17::Form17_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->commande_view))->EndInit();
			this->groupBox_identite->ResumeLayout(false);
			this->groupBox_identite->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->article_view))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->date_view))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->payement_view))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_view))->EndInit();
			this->groupBox_article->ResumeLayout(false);
			this->groupBox_dates->ResumeLayout(false);
			this->groupBox_commande->ResumeLayout(false);
			this->groupBox_clients->ResumeLayout(false);
			this->groupBox_payement->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form17_Load(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox_spe->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();

			String^ q = "select* from tab_commandes where ref_commande='" + textBox_ref->Text->ToString() + "' ";
			String^ a = "select* from tab_article";
			String^ b = "select* from tab_date where ID='" + textBox_spe->Text->ToString() + "'  ";
			String^ c = "select* from tab_client where ID='" + txt_client->Text->ToString() + "' ";
			String^ d = "select* from tab_payement where ID='" + textBox_spe->Text->ToString() + "' ";
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(q, appli);
			SqlDataAdapter^ sda1 = gcnew SqlDataAdapter(a, appli);
			SqlDataAdapter^ sda2 = gcnew SqlDataAdapter(b, appli);
			SqlDataAdapter^ sda3 = gcnew SqlDataAdapter(c, appli);
            SqlDataAdapter^ sda4 = gcnew SqlDataAdapter(d, appli);
			DataTable^ dt = gcnew DataTable();
			DataTable^ dt1 = gcnew DataTable();
			DataTable^ dt2 = gcnew DataTable();
			DataTable^ dt3 = gcnew DataTable();
			DataTable^ dt4 = gcnew DataTable();
			sda->Fill(dt);
			sda1->Fill(dt1);
			sda2->Fill(dt2);
			sda3->Fill(dt3);
			sda4->Fill(dt4);
			commande_view->DataSource = dt;
			article_view->DataSource = dt1;
			date_view->DataSource = dt2;
			client_view->DataSource = dt3;
			payement_view->DataSource = dt4;

		}
		if (this->checkBox_complet->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();

			String^ z = "select* from tab_commandes ";
			String^ w = "select* from tab_article";
			String^ x = "select* from tab_date ";
			String^ y = "select* from tab_client ";
			String^ t = "select* from tab_payement";
			SqlDataAdapter^ sda5 = gcnew SqlDataAdapter(z, appli);
			SqlDataAdapter^ sda6 = gcnew SqlDataAdapter(w, appli);
			SqlDataAdapter^ sda7 = gcnew SqlDataAdapter(x, appli);
			SqlDataAdapter^ sda8 = gcnew SqlDataAdapter(y, appli);
			SqlDataAdapter^ sda9 = gcnew SqlDataAdapter(t, appli);
			DataTable^ dt5 = gcnew DataTable();
			DataTable^ dt6 = gcnew DataTable();
			DataTable^ dt7 = gcnew DataTable();
			DataTable^ dt8 = gcnew DataTable();
			DataTable^ dt9 = gcnew DataTable();
			sda5->Fill(dt5);
			sda6->Fill(dt6);
			sda7->Fill(dt7);
			sda8->Fill(dt8);
			sda9->Fill(dt9);
			commande_view->DataSource = dt5;
			article_view->DataSource = dt6;
			date_view->DataSource = dt7;
			client_view->DataSource = dt8;
			payement_view->DataSource = dt9;
		}
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void checkBox_spe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox_identite_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_spe_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_ref_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_ref_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox_complet_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void commande_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void client_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void article_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void date_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void payement_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void groupBox_commande_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_article_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_dates_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_clients_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_payement_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_article_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_client_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_article3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_article4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_article4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
