#pragma once

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
	/// Description résumée de Form19
	/// </summary>
	public ref class Form19 : public System::Windows::Forms::Form
	{
	public:
		Form19(void)
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
		~Form19()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
	private: System::Windows::Forms::CheckBox^ checkBox_panier;
	public:
	private: System::Windows::Forms::CheckBox^ checkBox_affaire;
	private: System::Windows::Forms::CheckBox^ checkBox_rea;
	private: System::Windows::Forms::CheckBox^ checkBox_total_client;
	private: System::Windows::Forms::CheckBox^ checkBox_plus_vendus;
	private: System::Windows::Forms::CheckBox^ checkBox_moins_vendu;
	private: System::Windows::Forms::CheckBox^ checkBox_val_com_stock;
	private: System::Windows::Forms::CheckBox^ checkBox_val_ac_stock;
	private: System::Windows::Forms::CheckBox^ checkBox_viriation;
	private: System::Windows::Forms::DataGridView^ affichage_view;
	private: System::Windows::Forms::TextBox^ textBox_mois;
	private: System::Windows::Forms::TextBox^ txt_id_client;


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
			this->checkBox_panier = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_affaire = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_rea = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_total_client = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_plus_vendus = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_moins_vendu = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_val_com_stock = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_val_ac_stock = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_viriation = (gcnew System::Windows::Forms::CheckBox());
			this->affichage_view = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_mois = (gcnew System::Windows::Forms::TextBox());
			this->txt_id_client = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affichage_view))->BeginInit();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form19::btn_exit_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Location = System::Drawing::Point(271, 679);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(414, 49);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"Afficher";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form19::btn_valider_Click);
			// 
			// checkBox_panier
			// 
			this->checkBox_panier->AutoSize = true;
			this->checkBox_panier->Location = System::Drawing::Point(31, 80);
			this->checkBox_panier->Name = L"checkBox_panier";
			this->checkBox_panier->Size = System::Drawing::Size(117, 21);
			this->checkBox_panier->TabIndex = 37;
			this->checkBox_panier->Text = L"Panier moyen";
			this->checkBox_panier->UseVisualStyleBackColor = true;
			this->checkBox_panier->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_panier_CheckedChanged);
			// 
			// checkBox_affaire
			// 
			this->checkBox_affaire->AutoSize = true;
			this->checkBox_affaire->Location = System::Drawing::Point(31, 143);
			this->checkBox_affaire->Name = L"checkBox_affaire";
			this->checkBox_affaire->Size = System::Drawing::Size(115, 21);
			this->checkBox_affaire->TabIndex = 38;
			this->checkBox_affaire->Text = L"Chiffre affaire";
			this->checkBox_affaire->UseVisualStyleBackColor = true;
			this->checkBox_affaire->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_affaire_CheckedChanged);
			// 
			// checkBox_rea
			// 
			this->checkBox_rea->AutoSize = true;
			this->checkBox_rea->Location = System::Drawing::Point(31, 209);
			this->checkBox_rea->Name = L"checkBox_rea";
			this->checkBox_rea->Size = System::Drawing::Size(163, 21);
			this->checkBox_rea->TabIndex = 39;
			this->checkBox_rea->Text = L"reapprovisionnement";
			this->checkBox_rea->UseVisualStyleBackColor = true;
			this->checkBox_rea->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_rea_CheckedChanged);
			// 
			// checkBox_total_client
			// 
			this->checkBox_total_client->AutoSize = true;
			this->checkBox_total_client->Location = System::Drawing::Point(31, 263);
			this->checkBox_total_client->Name = L"checkBox_total_client";
			this->checkBox_total_client->Size = System::Drawing::Size(133, 21);
			this->checkBox_total_client->TabIndex = 40;
			this->checkBox_total_client->Text = L"achat total client";
			this->checkBox_total_client->UseVisualStyleBackColor = true;
			this->checkBox_total_client->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_total_client_CheckedChanged);
			// 
			// checkBox_plus_vendus
			// 
			this->checkBox_plus_vendus->AutoSize = true;
			this->checkBox_plus_vendus->Location = System::Drawing::Point(31, 327);
			this->checkBox_plus_vendus->Name = L"checkBox_plus_vendus";
			this->checkBox_plus_vendus->Size = System::Drawing::Size(157, 21);
			this->checkBox_plus_vendus->TabIndex = 41;
			this->checkBox_plus_vendus->Text = L"10 articles + vendus";
			this->checkBox_plus_vendus->UseVisualStyleBackColor = true;
			this->checkBox_plus_vendus->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_plus_vendus_CheckedChanged);
			// 
			// checkBox_moins_vendu
			// 
			this->checkBox_moins_vendu->AutoSize = true;
			this->checkBox_moins_vendu->Location = System::Drawing::Point(31, 390);
			this->checkBox_moins_vendu->Name = L"checkBox_moins_vendu";
			this->checkBox_moins_vendu->Size = System::Drawing::Size(154, 21);
			this->checkBox_moins_vendu->TabIndex = 42;
			this->checkBox_moins_vendu->Text = L"10 articles - vendus";
			this->checkBox_moins_vendu->UseVisualStyleBackColor = true;
			this->checkBox_moins_vendu->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_moins_vendu_CheckedChanged);
			// 
			// checkBox_val_com_stock
			// 
			this->checkBox_val_com_stock->AutoSize = true;
			this->checkBox_val_com_stock->Location = System::Drawing::Point(31, 454);
			this->checkBox_val_com_stock->Name = L"checkBox_val_com_stock";
			this->checkBox_val_com_stock->Size = System::Drawing::Size(181, 21);
			this->checkBox_val_com_stock->TabIndex = 43;
			this->checkBox_val_com_stock->Text = L"valeur commercial stock";
			this->checkBox_val_com_stock->UseVisualStyleBackColor = true;
			this->checkBox_val_com_stock->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_val_com_stock_CheckedChanged);
			// 
			// checkBox_val_ac_stock
			// 
			this->checkBox_val_ac_stock->AutoSize = true;
			this->checkBox_val_ac_stock->Location = System::Drawing::Point(31, 518);
			this->checkBox_val_ac_stock->Name = L"checkBox_val_ac_stock";
			this->checkBox_val_ac_stock->Size = System::Drawing::Size(145, 21);
			this->checkBox_val_ac_stock->TabIndex = 44;
			this->checkBox_val_ac_stock->Text = L"valeur achat stock";
			this->checkBox_val_ac_stock->UseVisualStyleBackColor = true;
			this->checkBox_val_ac_stock->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_val_ac_stock_CheckedChanged);
			// 
			// checkBox_viriation
			// 
			this->checkBox_viriation->AutoSize = true;
			this->checkBox_viriation->Location = System::Drawing::Point(31, 580);
			this->checkBox_viriation->Name = L"checkBox_viriation";
			this->checkBox_viriation->Size = System::Drawing::Size(153, 21);
			this->checkBox_viriation->TabIndex = 45;
			this->checkBox_viriation->Text = L"Simulation variation";
			this->checkBox_viriation->UseVisualStyleBackColor = true;
			this->checkBox_viriation->CheckedChanged += gcnew System::EventHandler(this, &Form19::checkBox_viriation_CheckedChanged);
			// 
			// affichage_view
			// 
			this->affichage_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->affichage_view->Location = System::Drawing::Point(287, 80);
			this->affichage_view->Name = L"affichage_view";
			this->affichage_view->RowHeadersWidth = 51;
			this->affichage_view->RowTemplate->Height = 24;
			this->affichage_view->Size = System::Drawing::Size(694, 537);
			this->affichage_view->TabIndex = 46;
			this->affichage_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form19::affichage_view_CellContentClick);
			// 
			// textBox_mois
			// 
			this->textBox_mois->Location = System::Drawing::Point(152, 143);
			this->textBox_mois->Name = L"textBox_mois";
			this->textBox_mois->Size = System::Drawing::Size(100, 22);
			this->textBox_mois->TabIndex = 47;
			this->textBox_mois->TextChanged += gcnew System::EventHandler(this, &Form19::textBox_mois_TextChanged);
			// 
			// txt_id_client
			// 
			this->txt_id_client->Location = System::Drawing::Point(170, 263);
			this->txt_id_client->Name = L"txt_id_client";
			this->txt_id_client->Size = System::Drawing::Size(100, 22);
			this->txt_id_client->TabIndex = 48;
			this->txt_id_client->TextChanged += gcnew System::EventHandler(this, &Form19::txt_id_client_TextChanged);
			// 
			// Form19
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 772);
			this->Controls->Add(this->txt_id_client);
			this->Controls->Add(this->textBox_mois);
			this->Controls->Add(this->affichage_view);
			this->Controls->Add(this->checkBox_viriation);
			this->Controls->Add(this->checkBox_val_ac_stock);
			this->Controls->Add(this->checkBox_val_com_stock);
			this->Controls->Add(this->checkBox_moins_vendu);
			this->Controls->Add(this->checkBox_plus_vendus);
			this->Controls->Add(this->checkBox_total_client);
			this->Controls->Add(this->checkBox_rea);
			this->Controls->Add(this->checkBox_affaire);
			this->Controls->Add(this->checkBox_panier);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form19";
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &Form19::Form19_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->affichage_view))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form19_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox_panier->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ q = " SELECT AVG(montant_ht) AS PanierMoyen FROM tab_payement";
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(q, appli);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			affichage_view->DataSource = dt;
		}
		if (this->checkBox_affaire->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ a = "SELECT SUM(montant_ht) AS CAMois FROM tab_payement INNER JOIN tab_date ON tab_payement.id_date = tab_date.ID WHERE MONTH(tab_date.date_payement) = '" + textBox_mois->Text->ToString() + "' ";
			SqlDataAdapter^ sda1 = gcnew SqlDataAdapter(a, appli);
			DataTable^ dt1 = gcnew DataTable();
			sda1->Fill(dt1);
			affichage_view->DataSource = dt1;
		}
		if (this->checkBox_rea->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ b = "SELECT tab_article.designation FROM tab_article INNER JOIN tab_stock ON tab_article.ID = tab_stock.id_article WHERE tab_stock.quantite_en_stock < tab_stock.seuil_rea ORDER BY tab_article.ID";
			SqlDataAdapter^ sda2 = gcnew SqlDataAdapter(b, appli);
			DataTable^ dt2 = gcnew DataTable();
			sda2->Fill(dt2);
			affichage_view->DataSource = dt2;
		}
		if (this->checkBox_total_client->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ c = "SELECT SUM(montant_ht) AS TotalAchatCLient FROM tab_payement INNER JOIN tab_commandes ON tab_payement.ID = tab_commandes.id_client WHERE tab_commandes.id_client = '" + txt_id_client->Text->ToString() + "'";
			SqlDataAdapter^ sda3 = gcnew SqlDataAdapter(c, appli);
			DataTable^ dt3 = gcnew DataTable();
			sda3->Fill(dt3);
			affichage_view->DataSource = dt3;
		}
		if (this->checkBox_plus_vendus->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ d = "SELECT top 10[designation], SUM(quantite_article) Quantite FROM tab_commandes INNER JOIN tab_article ON tab_commandes.id_article = tab_article.ID GROUP BY designation ORDER BY Quantite DESC";	
			SqlDataAdapter^ sda4 = gcnew SqlDataAdapter(d, appli);
			DataTable^ dt4 = gcnew DataTable();
			sda4->Fill(dt4);
			affichage_view->DataSource = dt4;
		}
		if (this->checkBox_moins_vendu->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ e= "SELECT top 10[designation], SUM(quantite_article) Quantite FROM tab_commandes INNER JOIN tab_article ON tab_commandes.id_article = tab_article.ID GROUP BY designation ORDER BY Quantite ASC";
			SqlDataAdapter^ sda5 = gcnew SqlDataAdapter(e, appli);
			DataTable^ dt5 = gcnew DataTable();
			sda5->Fill(dt5);
			affichage_view->DataSource = dt5;
		}
		if (this->checkBox_val_com_stock->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ f = "SELECT SUM(prix_ht*tab_stock.quantite_en_stock) AS valeur FROM tab_article, tab_stock where tab_article.ID=tab_stock.id_article";
			SqlDataAdapter^ sda6 = gcnew SqlDataAdapter(f, appli);
			DataTable^ dt6 = gcnew DataTable();
			sda6->Fill(dt6);
			affichage_view->DataSource = dt6;
		}
		if (this->checkBox_val_ac_stock->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ g = "SELECT SUM((prix_ht + taux_tva)*tab_stock.quantite_en_stock) AS valeur FROM tab_article, tab_stock where tab_article.ID=tab_stock.id_article";
			SqlDataAdapter^ sda7 = gcnew SqlDataAdapter(g, appli);
			DataTable^ dt7 = gcnew DataTable();
			sda7->Fill(dt7);
			affichage_view->DataSource = dt7;
		}
		




	}
	private: System::Void affichage_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void checkBox_panier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_affaire_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_rea_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_total_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_plus_vendus_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_val_ac_stock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_val_com_stock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_moins_vendu_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox_viriation_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_mois_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_id_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
