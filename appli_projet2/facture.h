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

	//ing namespace System::

	/// <summary>
	/// Description résumée de Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		Form5(void)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int index;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ pictureBox_logo;
	private: System::Windows::Forms::DataGridView^ facture_GridView;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";
	private: System::Windows::Forms::TextBox^ txt_ref_commande;
	public:
	private: System::Windows::Forms::Label^ label_ref_commande;
	private: System::Windows::Forms::GroupBox^ groupBox_commande;
	private: System::Windows::Forms::GroupBox^ groupBox_client;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox_facture;
	private: System::Windows::Forms::DataGridView^ identifiant_GridView;
	private: System::Windows::Forms::TextBox^ txt_client;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::Button^ btn_valider;

	private: System::Windows::Forms::Label^ label_client;
	private: System::Windows::Forms::Label^ label_facture;





	private: System::Windows::Forms::Button^ btn_exit;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->pictureBox_logo = (gcnew System::Windows::Forms::PictureBox());
			this->facture_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->txt_ref_commande = (gcnew System::Windows::Forms::TextBox());
			this->label_ref_commande = (gcnew System::Windows::Forms::Label());
			this->groupBox_commande = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox_client = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox_facture = (gcnew System::Windows::Forms::GroupBox());
			this->identifiant_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->txt_client = (gcnew System::Windows::Forms::TextBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->label_client = (gcnew System::Windows::Forms::Label());
			this->label_facture = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->facture_GridView))->BeginInit();
			this->groupBox_commande->SuspendLayout();
			this->groupBox_client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox_facture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiant_GridView))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exit->ForeColor = System::Drawing::Color::Blue;
			this->btn_exit->Location = System::Drawing::Point(12, 728);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(100, 25);
			this->btn_exit->TabIndex = 11;
			this->btn_exit->Text = L"Retour";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form5::btn_exit_Click);
			// 
			// pictureBox_logo
			// 
			this->pictureBox_logo->ImageLocation = L"C:\\Users\\bbila\\source\\repos\\bilal-62210\\git_bilal\\appli_projet2\\logo.png";
			this->pictureBox_logo->Location = System::Drawing::Point(12, 12);
			this->pictureBox_logo->Name = L"pictureBox_logo";
			this->pictureBox_logo->Size = System::Drawing::Size(265, 187);
			this->pictureBox_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox_logo->TabIndex = 0;
			this->pictureBox_logo->TabStop = false;
			this->pictureBox_logo->UseWaitCursor = true;
			this->pictureBox_logo->Click += gcnew System::EventHandler(this, &Form5::pictureBox_logo_Click);
			// 
			// facture_GridView
			// 
			this->facture_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->facture_GridView->Location = System::Drawing::Point(6, 21);
			this->facture_GridView->Name = L"facture_GridView";
			this->facture_GridView->RowHeadersWidth = 51;
			this->facture_GridView->RowTemplate->Height = 24;
			this->facture_GridView->Size = System::Drawing::Size(987, 113);
			this->facture_GridView->TabIndex = 1;
			this->facture_GridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form5::facture_GridView_CellContentClick);
			// 
			// btn_valider
			// 
			this->btn_valider->Location = System::Drawing::Point(423, 672);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(414, 49);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form5::btn_valider_Click);
			// 
			// txt_ref_commande
			// 
			this->txt_ref_commande->Location = System::Drawing::Point(573, 84);
			this->txt_ref_commande->Name = L"txt_ref_commande";
			this->txt_ref_commande->Size = System::Drawing::Size(264, 22);
			this->txt_ref_commande->TabIndex = 2;
			this->txt_ref_commande->TextChanged += gcnew System::EventHandler(this, &Form5::txt_ref_commande_TextChanged);
			// 
			// label_ref_commande
			// 
			this->label_ref_commande->AutoSize = true;
			this->label_ref_commande->Location = System::Drawing::Point(390, 89);
			this->label_ref_commande->Name = L"label_ref_commande";
			this->label_ref_commande->Size = System::Drawing::Size(146, 17);
			this->label_ref_commande->TabIndex = 3;
			this->label_ref_commande->Text = L"reference_commande";
			this->label_ref_commande->Click += gcnew System::EventHandler(this, &Form5::label_ref_commande_Click);
			// 
			// groupBox_commande
			// 
			this->groupBox_commande->Controls->Add(this->facture_GridView);
			this->groupBox_commande->Location = System::Drawing::Point(151, 307);
			this->groupBox_commande->Name = L"groupBox_commande";
			this->groupBox_commande->Size = System::Drawing::Size(999, 143);
			this->groupBox_commande->TabIndex = 4;
			this->groupBox_commande->TabStop = false;
			this->groupBox_commande->Text = L"Commande";
			this->groupBox_commande->Enter += gcnew System::EventHandler(this, &Form5::groupBox_commande_Enter);
			// 
			// groupBox_client
			// 
			this->groupBox_client->Controls->Add(this->dataGridView1);
			this->groupBox_client->Location = System::Drawing::Point(145, 485);
			this->groupBox_client->Name = L"groupBox_client";
			this->groupBox_client->Size = System::Drawing::Size(999, 134);
			this->groupBox_client->TabIndex = 5;
			this->groupBox_client->TabStop = false;
			this->groupBox_client->Text = L"Client";
			this->groupBox_client->Enter += gcnew System::EventHandler(this, &Form5::groupBox_client_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(987, 106);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form5::dataGridView1_CellContentClick);
			// 
			// groupBox_facture
			// 
			this->groupBox_facture->Controls->Add(this->identifiant_GridView);
			this->groupBox_facture->Location = System::Drawing::Point(896, 12);
			this->groupBox_facture->Name = L"groupBox_facture";
			this->groupBox_facture->Size = System::Drawing::Size(294, 168);
			this->groupBox_facture->TabIndex = 6;
			this->groupBox_facture->TabStop = false;
			this->groupBox_facture->Text = L"Identification";
			this->groupBox_facture->Enter += gcnew System::EventHandler(this, &Form5::groupBox_facture_Enter);
			// 
			// identifiant_GridView
			// 
			this->identifiant_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->identifiant_GridView->Location = System::Drawing::Point(6, 23);
			this->identifiant_GridView->Name = L"identifiant_GridView";
			this->identifiant_GridView->RowHeadersWidth = 51;
			this->identifiant_GridView->RowTemplate->Height = 24;
			this->identifiant_GridView->Size = System::Drawing::Size(282, 130);
			this->identifiant_GridView->TabIndex = 0;
			this->identifiant_GridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form5::identifiant_GridView_CellContentClick);
			// 
			// txt_client
			// 
			this->txt_client->Location = System::Drawing::Point(573, 127);
			this->txt_client->Name = L"txt_client";
			this->txt_client->Size = System::Drawing::Size(264, 22);
			this->txt_client->TabIndex = 12;
			this->txt_client->TextChanged += gcnew System::EventHandler(this, &Form5::txt_client_TextChanged);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(573, 170);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(264, 22);
			this->txt_id->TabIndex = 13;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form5::txt_id_TextChanged);
			// 
			// label_client
			// 
			this->label_client->AutoSize = true;
			this->label_client->Location = System::Drawing::Point(393, 131);
			this->label_client->Name = L"label_client";
			this->label_client->Size = System::Drawing::Size(76, 17);
			this->label_client->TabIndex = 14;
			this->label_client->Text = L"nom_client";
			this->label_client->Click += gcnew System::EventHandler(this, &Form5::label_client_Click);
			// 
			// label_facture
			// 
			this->label_facture->AutoSize = true;
			this->label_facture->Location = System::Drawing::Point(396, 174);
			this->label_facture->Name = L"label_facture";
			this->label_facture->Size = System::Drawing::Size(121, 17);
			this->label_facture->TabIndex = 15;
			this->label_facture->Text = L"identifiant_facture";
			this->label_facture->Click += gcnew System::EventHandler(this, &Form5::label_facture_Click);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 816);
			this->Controls->Add(this->label_facture);
			this->Controls->Add(this->label_client);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->txt_client);
			this->Controls->Add(this->groupBox_facture);
			this->Controls->Add(this->groupBox_client);
			this->Controls->Add(this->groupBox_commande);
			this->Controls->Add(this->label_ref_commande);
			this->Controls->Add(this->txt_ref_commande);
			this->Controls->Add(this->pictureBox_logo);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form5";
			this->Text = L"facture";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->facture_GridView))->EndInit();
			this->groupBox_commande->ResumeLayout(false);
			this->groupBox_client->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox_facture->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->identifiant_GridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form5_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ q = "select* from tab_commandes where tab_commandes.ref_commande='" + txt_ref_commande->Text->ToString() + "'";
		String^ a = "select* from tab_client where tab_client.nom_client='" + txt_client->Text->ToString() + "'";
		String^ b = "select* from tab_factures where tab_factures.ID='" + txt_id->Text->ToString() + "'";
		SqlDataAdapter^ sda1 = gcnew SqlDataAdapter(a, appli);
		SqlDataAdapter^ sda2 = gcnew SqlDataAdapter(b, appli);
		SqlDataAdapter^ sda = gcnew SqlDataAdapter(q, appli);
		DataTable^ dt = gcnew DataTable();
		DataTable^ dt2 = gcnew DataTable();
		DataTable^ dt1 = gcnew DataTable();
		sda1->Fill(dt1);
		sda2->Fill(dt2);
		sda->Fill(dt);
		dataGridView1->DataSource = dt1;
	    identifiant_GridView->DataSource = dt2;
		facture_GridView->DataSource = dt;


		MessageBox::Show("facture envoyée par courrier electronique");
		

	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void pictureBox_logo_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void facture_GridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		
     }
private: System::Void label_ref_commande_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ref_commande_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_commande_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_client_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox_facture_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	
}
private: System::Void identifiant_GridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	
}
private: System::Void label_client_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_client_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_facture_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
