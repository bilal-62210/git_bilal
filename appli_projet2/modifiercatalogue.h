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
	/// Description résumée de Form14
	/// </summary>
	public ref class Form14 : public System::Windows::Forms::Form
	{
	public:
		Form14(void)
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
		~Form14()
		{
			if (components)
			{
				delete components;
			}
		}

	
private: System::Windows::Forms::Button^ btn_valider;
public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
  public: int index;
private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::GroupBox^ groupBox_modif;

	private: System::Windows::Forms::TextBox^ txt_designation;
	private: System::Windows::Forms::TextBox^ txt_identifiant;
	private: System::Windows::Forms::Label^ label_designation;
	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::GroupBox^ groupBox_new;

	private: System::Windows::Forms::TextBox^ txt_stock;
	private: System::Windows::Forms::TextBox^ txt_rea;
	private: System::Windows::Forms::TextBox^ txt_tva;
	private: System::Windows::Forms::TextBox^ txt_ref;
	private: System::Windows::Forms::TextBox^ txt_ht;
	private: System::Windows::Forms::TextBox^ txt_nom_artice;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::CheckBox^ checkBox_stock;
	private: System::Windows::Forms::CheckBox^ checkBox_rea;
	private: System::Windows::Forms::CheckBox^ checkBox_tva;
	private: System::Windows::Forms::CheckBox^ checkBox_ref;
	private: System::Windows::Forms::CheckBox^ checkBox_ht;
	private: System::Windows::Forms::CheckBox^ checkBox_nom_article;
	private: System::Windows::Forms::CheckBox^ checkBox_id;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::CheckBox^ checkBox_catalogue;
	private: System::Windows::Forms::Button^ btn_afficher;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->groupBox_modif = (gcnew System::Windows::Forms::GroupBox());
			this->txt_designation = (gcnew System::Windows::Forms::TextBox());
			this->txt_identifiant = (gcnew System::Windows::Forms::TextBox());
			this->label_designation = (gcnew System::Windows::Forms::Label());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->groupBox_new = (gcnew System::Windows::Forms::GroupBox());
			this->txt_stock = (gcnew System::Windows::Forms::TextBox());
			this->txt_rea = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom_artice = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->checkBox_stock = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_rea = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_tva = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_ref = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_ht = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_nom_article = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_id = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox_catalogue = (gcnew System::Windows::Forms::CheckBox());
			this->btn_afficher = (gcnew System::Windows::Forms::Button());
			this->groupBox_modif->SuspendLayout();
			this->groupBox_new->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form14::btn_exit_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(354, 693);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form14::btn_valider_Click);
			// 
			// groupBox_modif
			// 
			this->groupBox_modif->Controls->Add(this->txt_designation);
			this->groupBox_modif->Controls->Add(this->txt_identifiant);
			this->groupBox_modif->Controls->Add(this->label_designation);
			this->groupBox_modif->Controls->Add(this->label_id);
			this->groupBox_modif->Location = System::Drawing::Point(108, 243);
			this->groupBox_modif->Name = L"groupBox_modif";
			this->groupBox_modif->Size = System::Drawing::Size(871, 94);
			this->groupBox_modif->TabIndex = 37;
			this->groupBox_modif->TabStop = false;
			this->groupBox_modif->Text = L"Article à modifier:";
			this->groupBox_modif->Enter += gcnew System::EventHandler(this, &Form14::groupBox_modif_Enter);
			// 
			// txt_designation
			// 
			this->txt_designation->Location = System::Drawing::Point(557, 33);
			this->txt_designation->Name = L"txt_designation";
			this->txt_designation->Size = System::Drawing::Size(125, 22);
			this->txt_designation->TabIndex = 3;
			this->txt_designation->TextChanged += gcnew System::EventHandler(this, &Form14::txt_designation_TextChanged);
			// 
			// txt_identifiant
			// 
			this->txt_identifiant->Location = System::Drawing::Point(123, 34);
			this->txt_identifiant->Name = L"txt_identifiant";
			this->txt_identifiant->Size = System::Drawing::Size(139, 22);
			this->txt_identifiant->TabIndex = 2;
			this->txt_identifiant->TextChanged += gcnew System::EventHandler(this, &Form14::txt_identifiant_TextChanged);
			// 
			// label_designation
			// 
			this->label_designation->AutoSize = true;
			this->label_designation->Location = System::Drawing::Point(473, 38);
			this->label_designation->Name = L"label_designation";
			this->label_designation->Size = System::Drawing::Size(81, 17);
			this->label_designation->TabIndex = 1;
			this->label_designation->Text = L"designation";
			this->label_designation->Click += gcnew System::EventHandler(this, &Form14::label_designation_Click);
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(48, 40);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(69, 17);
			this->label_id->TabIndex = 0;
			this->label_id->Text = L"Identifiant";
			this->label_id->Click += gcnew System::EventHandler(this, &Form14::label_id_Click);
			// 
			// groupBox_new
			// 
			this->groupBox_new->Controls->Add(this->txt_stock);
			this->groupBox_new->Controls->Add(this->txt_rea);
			this->groupBox_new->Controls->Add(this->txt_tva);
			this->groupBox_new->Controls->Add(this->txt_ref);
			this->groupBox_new->Controls->Add(this->txt_ht);
			this->groupBox_new->Controls->Add(this->txt_nom_artice);
			this->groupBox_new->Controls->Add(this->txt_id);
			this->groupBox_new->Controls->Add(this->checkBox_stock);
			this->groupBox_new->Controls->Add(this->checkBox_rea);
			this->groupBox_new->Controls->Add(this->checkBox_tva);
			this->groupBox_new->Controls->Add(this->checkBox_ref);
			this->groupBox_new->Controls->Add(this->checkBox_ht);
			this->groupBox_new->Controls->Add(this->checkBox_nom_article);
			this->groupBox_new->Controls->Add(this->checkBox_id);
			this->groupBox_new->Location = System::Drawing::Point(108, 366);
			this->groupBox_new->Name = L"groupBox_new";
			this->groupBox_new->Size = System::Drawing::Size(871, 293);
			this->groupBox_new->TabIndex = 38;
			this->groupBox_new->TabStop = false;
			this->groupBox_new->Text = L"Données choisies";
			this->groupBox_new->Enter += gcnew System::EventHandler(this, &Form14::groupBox_new_Enter);
			// 
			// txt_stock
			// 
			this->txt_stock->Location = System::Drawing::Point(676, 204);
			this->txt_stock->Name = L"txt_stock";
			this->txt_stock->Size = System::Drawing::Size(152, 22);
			this->txt_stock->TabIndex = 13;
			this->txt_stock->TextChanged += gcnew System::EventHandler(this, &Form14::txt_stock_TextChanged);
			// 
			// txt_rea
			// 
			this->txt_rea->Location = System::Drawing::Point(692, 124);
			this->txt_rea->Name = L"txt_rea";
			this->txt_rea->Size = System::Drawing::Size(124, 22);
			this->txt_rea->TabIndex = 12;
			this->txt_rea->TextChanged += gcnew System::EventHandler(this, &Form14::txt_rea_TextChanged);
			// 
			// txt_tva
			// 
			this->txt_tva->Location = System::Drawing::Point(598, 64);
			this->txt_tva->Name = L"txt_tva";
			this->txt_tva->Size = System::Drawing::Size(161, 22);
			this->txt_tva->TabIndex = 11;
			this->txt_tva->TextChanged += gcnew System::EventHandler(this, &Form14::txt_tva_TextChanged);
			// 
			// txt_ref
			// 
			this->txt_ref->Location = System::Drawing::Point(181, 232);
			this->txt_ref->Name = L"txt_ref";
			this->txt_ref->Size = System::Drawing::Size(158, 22);
			this->txt_ref->TabIndex = 10;
			this->txt_ref->TextChanged += gcnew System::EventHandler(this, &Form14::txt_ref_TextChanged);
			// 
			// txt_ht
			// 
			this->txt_ht->Location = System::Drawing::Point(181, 176);
			this->txt_ht->Name = L"txt_ht";
			this->txt_ht->Size = System::Drawing::Size(158, 22);
			this->txt_ht->TabIndex = 9;
			this->txt_ht->TextChanged += gcnew System::EventHandler(this, &Form14::txt_ht_TextChanged);
			// 
			// txt_nom_artice
			// 
			this->txt_nom_artice->Location = System::Drawing::Point(181, 111);
			this->txt_nom_artice->Name = L"txt_nom_artice";
			this->txt_nom_artice->Size = System::Drawing::Size(158, 22);
			this->txt_nom_artice->TabIndex = 8;
			this->txt_nom_artice->TextChanged += gcnew System::EventHandler(this, &Form14::txt_nom_artice_TextChanged);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(181, 64);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(158, 22);
			this->txt_id->TabIndex = 7;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form14::txt_id_TextChanged);
			// 
			// checkBox_stock
			// 
			this->checkBox_stock->AutoSize = true;
			this->checkBox_stock->Location = System::Drawing::Point(476, 204);
			this->checkBox_stock->Name = L"checkBox_stock";
			this->checkBox_stock->Size = System::Drawing::Size(146, 21);
			this->checkBox_stock->TabIndex = 6;
			this->checkBox_stock->Text = L"quantite_en_stock";
			this->checkBox_stock->UseVisualStyleBackColor = true;
			this->checkBox_stock->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_stock_CheckedChanged);
			// 
			// checkBox_rea
			// 
			this->checkBox_rea->AutoSize = true;
			this->checkBox_rea->Location = System::Drawing::Point(476, 126);
			this->checkBox_rea->Name = L"checkBox_rea";
			this->checkBox_rea->Size = System::Drawing::Size(192, 21);
			this->checkBox_rea->TabIndex = 5;
			this->checkBox_rea->Text = L"seuil_reapprovisionnment";
			this->checkBox_rea->UseVisualStyleBackColor = true;
			this->checkBox_rea->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_rea_CheckedChanged);
			// 
			// checkBox_tva
			// 
			this->checkBox_tva->AutoSize = true;
			this->checkBox_tva->Location = System::Drawing::Point(476, 64);
			this->checkBox_tva->Name = L"checkBox_tva";
			this->checkBox_tva->Size = System::Drawing::Size(83, 21);
			this->checkBox_tva->TabIndex = 4;
			this->checkBox_tva->Text = L"taux_tva";
			this->checkBox_tva->UseVisualStyleBackColor = true;
			this->checkBox_tva->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_tva_CheckedChanged);
			// 
			// checkBox_ref
			// 
			this->checkBox_ref->AutoSize = true;
			this->checkBox_ref->Location = System::Drawing::Point(51, 232);
			this->checkBox_ref->Name = L"checkBox_ref";
			this->checkBox_ref->Size = System::Drawing::Size(93, 21);
			this->checkBox_ref->TabIndex = 3;
			this->checkBox_ref->Text = L"ref_article";
			this->checkBox_ref->UseVisualStyleBackColor = true;
			this->checkBox_ref->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_ref_CheckedChanged);
			// 
			// checkBox_ht
			// 
			this->checkBox_ht->AutoSize = true;
			this->checkBox_ht->Location = System::Drawing::Point(51, 178);
			this->checkBox_ht->Name = L"checkBox_ht";
			this->checkBox_ht->Size = System::Drawing::Size(72, 21);
			this->checkBox_ht->TabIndex = 2;
			this->checkBox_ht->Text = L"prix_ht";
			this->checkBox_ht->UseVisualStyleBackColor = true;
			this->checkBox_ht->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_ht_CheckedChanged);
			// 
			// checkBox_nom_article
			// 
			this->checkBox_nom_article->AutoSize = true;
			this->checkBox_nom_article->Location = System::Drawing::Point(51, 111);
			this->checkBox_nom_article->Name = L"checkBox_nom_article";
			this->checkBox_nom_article->Size = System::Drawing::Size(103, 21);
			this->checkBox_nom_article->TabIndex = 1;
			this->checkBox_nom_article->Text = L"nom_article";
			this->checkBox_nom_article->UseVisualStyleBackColor = true;
			this->checkBox_nom_article->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_nom_article_CheckedChanged);
			// 
			// checkBox_id
			// 
			this->checkBox_id->AutoSize = true;
			this->checkBox_id->Location = System::Drawing::Point(51, 64);
			this->checkBox_id->Name = L"checkBox_id";
			this->checkBox_id->Size = System::Drawing::Size(43, 21);
			this->checkBox_id->TabIndex = 0;
			this->checkBox_id->Text = L"ID";
			this->checkBox_id->UseVisualStyleBackColor = true;
			this->checkBox_id->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_id_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(140, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(436, 187);
			this->dataGridView1->TabIndex = 39;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form14::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(654, 15);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(426, 184);
			this->dataGridView2->TabIndex = 40;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form14::dataGridView2_CellContentClick);
			// 
			// checkBox_catalogue
			// 
			this->checkBox_catalogue->AutoSize = true;
			this->checkBox_catalogue->Location = System::Drawing::Point(136, 205);
			this->checkBox_catalogue->Name = L"checkBox_catalogue";
			this->checkBox_catalogue->Size = System::Drawing::Size(234, 21);
			this->checkBox_catalogue->TabIndex = 41;
			this->checkBox_catalogue->Text = L"Afficher le contenu de catalogue";
			this->checkBox_catalogue->UseVisualStyleBackColor = true;
			this->checkBox_catalogue->CheckedChanged += gcnew System::EventHandler(this, &Form14::checkBox_catalogue_CheckedChanged);
			// 
			// btn_afficher
			// 
			this->btn_afficher->Location = System::Drawing::Point(393, 205);
			this->btn_afficher->Name = L"btn_afficher";
			this->btn_afficher->Size = System::Drawing::Size(141, 23);
			this->btn_afficher->TabIndex = 42;
			this->btn_afficher->Text = L"afficher";
			this->btn_afficher->UseVisualStyleBackColor = true;
			this->btn_afficher->Click += gcnew System::EventHandler(this, &Form14::btn_afficher_Click);
			// 
			// Form14
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 821);
			this->Controls->Add(this->btn_afficher);
			this->Controls->Add(this->checkBox_catalogue);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox_new);
			this->Controls->Add(this->groupBox_modif);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_valider);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form14";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form14::Form14_Load);
			this->groupBox_modif->ResumeLayout(false);
			this->groupBox_modif->PerformLayout();
			this->groupBox_new->ResumeLayout(false);
			this->groupBox_new->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form14_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox_id->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ o = "UPDATE tab_stock SET ID = '" + txt_id->Text->ToString() + "' WHERE ID='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd = gcnew SqlCommand(o, appli);
			cmd->ExecuteNonQuery();
		}
		if (this->checkBox_nom_article->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ a = "UPDATE tab_article SET designation = '" + txt_nom_artice->Text->ToString() + "' WHERE ID ='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd1 = gcnew SqlCommand(a, appli);
			cmd1->ExecuteNonQuery();
		}
		if (this->checkBox_ht->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ b = "UPDATE tab_article SET prix_ht = '" + txt_ht->Text->ToString() + "' WHERE designation ='" + txt_designation->Text->ToString() + "'";
			SqlCommand^ cmd2 = gcnew SqlCommand(b, appli);
			cmd2->ExecuteNonQuery();
		}
		if (this->checkBox_ref->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ c = "UPDATE tab_article SET ref_article = '" + txt_ref->Text->ToString() + "' WHERE designation ='" + txt_designation->Text->ToString() + "'";
			SqlCommand^ cmd3 = gcnew SqlCommand(c, appli);
			cmd3->ExecuteNonQuery();
		}
		if (this->checkBox_tva->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ d = "UPDATE tab_article SET taux_tva = '" + txt_tva->Text->ToString() + "' WHERE designation ='" + txt_designation->Text->ToString() + "'";
			SqlCommand^ cmd4 = gcnew SqlCommand(d, appli);
			cmd4->ExecuteNonQuery();
		}
		if (this->checkBox_rea->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ e = "UPDATE tab_stock SET seuil_rea = '" + txt_rea->Text->ToString() + "' WHERE ID ='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd5 = gcnew SqlCommand(e, appli);
			cmd5->ExecuteNonQuery();
		}
		if (this->checkBox_stock->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ f = "UPDATE tab_stock SET quantite_en_stock = '" + txt_stock->Text->ToString() + "' WHERE ID ='" + txt_identifiant->Text->ToString() + "'";
			SqlCommand^ cmd6 = gcnew SqlCommand(f, appli);
			cmd6->ExecuteNonQuery();
		}
		MessageBox::Show("Données modifiées");
	}
	private: System::Void label_id_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_identifiant_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_designation_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_designation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_id_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_nom_article_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_nom_artice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_ht_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ht_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_ref_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ref_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_tva_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_tva_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_rea_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_rea_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_stock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_stock_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_modif_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_new_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_catalogue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	

}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	
}
private: System::Void btn_afficher_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->checkBox_catalogue->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();

		String^ z = "select* from tab_stock ";
		SqlDataAdapter^ sda5 = gcnew SqlDataAdapter(z, appli);
		DataTable^ dt5 = gcnew DataTable();
		sda5->Fill(dt5);
		dataGridView1->DataSource = dt5;
		String^ w = "select* from tab_article";
		SqlDataAdapter^ sda6 = gcnew SqlDataAdapter(w, appli);
		DataTable^ dt6 = gcnew DataTable();
		sda6->Fill(dt6);
		dataGridView2->DataSource = dt6;
	}
}
};
}
