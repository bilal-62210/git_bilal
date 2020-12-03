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
	/// Description résumée de Form15
	/// </summary>
	public ref class Form16 : public System::Windows::Forms::Form
	{
	public:
		Form16(void)
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
		~Form16()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int index;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_valider;
	private: System::Windows::Forms::DataGridView^ client_view;

	private: System::Windows::Forms::CheckBox^ checkBox_spe;
	private: System::Windows::Forms::CheckBox^ checkBox_complet;
	private: System::Windows::Forms::TextBox^ textBox_spe;
	private: System::Windows::Forms::GroupBox^ groupBox_identite;
	private: System::Windows::Forms::TextBox^ textBox_prenom;
	private: System::Windows::Forms::Label^ label_prenom;
	private: System::Windows::Forms::Label^ label_nom;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";

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
			this->client_view = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox_spe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_complet = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_spe = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_identite = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_prenom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_view))->BeginInit();
			this->groupBox_identite->SuspendLayout();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form16::btn_exit_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Location = System::Drawing::Point(347, 675);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(414, 49);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"Afficher";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form16::btn_valider_Click);
			// 
			// client_view
			// 
			this->client_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->client_view->Location = System::Drawing::Point(119, 192);
			this->client_view->Name = L"client_view";
			this->client_view->RowHeadersWidth = 51;
			this->client_view->RowTemplate->Height = 24;
			this->client_view->Size = System::Drawing::Size(900, 459);
			this->client_view->TabIndex = 37;
			this->client_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form16::client_view_CellContentClick);
			// 
			// checkBox_spe
			// 
			this->checkBox_spe->AutoSize = true;
			this->checkBox_spe->Location = System::Drawing::Point(167, 62);
			this->checkBox_spe->Name = L"checkBox_spe";
			this->checkBox_spe->Size = System::Drawing::Size(165, 21);
			this->checkBox_spe->TabIndex = 38;
			this->checkBox_spe->Text = L"client_specifique";
			this->checkBox_spe->UseVisualStyleBackColor = true;
			this->checkBox_spe->CheckedChanged += gcnew System::EventHandler(this, &Form16::checkBox_spe_CheckedChanged);
			// 
			// checkBox_complet
			// 
			this->checkBox_complet->AutoSize = true;
			this->checkBox_complet->Location = System::Drawing::Point(726, 62);
			this->checkBox_complet->Name = L"checkBox_complet";
			this->checkBox_complet->Size = System::Drawing::Size(189, 21);
			this->checkBox_complet->TabIndex = 39;
			this->checkBox_complet->Text = L"table_client_complet";
			this->checkBox_complet->UseVisualStyleBackColor = true;
			this->checkBox_complet->CheckedChanged += gcnew System::EventHandler(this, &Form16::checkBox_complet_CheckedChanged);
			// 
			// textBox_spe
			// 
			this->textBox_spe->Location = System::Drawing::Point(109, 34);
			this->textBox_spe->Name = L"textBox_spe";
			this->textBox_spe->Size = System::Drawing::Size(100, 22);
			this->textBox_spe->TabIndex = 40;
			this->textBox_spe->TextChanged += gcnew System::EventHandler(this, &Form16::textBox_spe_TextChanged);
			// 
			// groupBox_identite
			// 
			this->groupBox_identite->Controls->Add(this->textBox_prenom);
			this->groupBox_identite->Controls->Add(this->label_prenom);
			this->groupBox_identite->Controls->Add(this->label_nom);
			this->groupBox_identite->Controls->Add(this->textBox_spe);
			this->groupBox_identite->Location = System::Drawing::Point(347, 12);
			this->groupBox_identite->Name = L"groupBox_identite";
			this->groupBox_identite->Size = System::Drawing::Size(242, 128);
			this->groupBox_identite->TabIndex = 41;
			this->groupBox_identite->TabStop = false;
			this->groupBox_identite->Text = L"Identité";
			this->groupBox_identite->Enter += gcnew System::EventHandler(this, &Form16::groupBox_identite_Enter);
			// 
			// textBox_prenom
			// 
			this->textBox_prenom->Location = System::Drawing::Point(109, 84);
			this->textBox_prenom->Name = L"textBox_prenom";
			this->textBox_prenom->Size = System::Drawing::Size(100, 22);
			this->textBox_prenom->TabIndex = 43;
			this->textBox_prenom->TextChanged += gcnew System::EventHandler(this, &Form16::textBox_prenom_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(30, 87);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(56, 17);
			this->label_prenom->TabIndex = 42;
			this->label_prenom->Text = L"prenom";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form16::label_prenom_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(30, 34);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 41;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form16::label_nom_Click);
			// 
			// Form15
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1191, 764);
			this->Controls->Add(this->groupBox_identite);
			this->Controls->Add(this->checkBox_complet);
			this->Controls->Add(this->checkBox_spe);
			this->Controls->Add(this->client_view);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form15";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form16::Form16_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->client_view))->EndInit();
			this->groupBox_identite->ResumeLayout(false);
			this->groupBox_identite->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form16_Load(System::Object^ sender, System::EventArgs^ e) {
		this->index = 0;
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkBox_spe->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ q = "select* from tab_client where tab_client.nom_client='" + textBox_spe->Text->ToString() + "' AND prenom_client = '" + textBox_prenom->Text->ToString() + "' ";
			SqlDataAdapter^ sda = gcnew SqlDataAdapter(q, appli);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			client_view->DataSource = dt;
		}
		if (this->checkBox_complet->Checked == true)
		{
			SqlConnection^ appli = gcnew SqlConnection(ip);
			appli->Open();
			String^ a = "select* from tab_client ";
			SqlDataAdapter^ sda1 = gcnew SqlDataAdapter(a, appli);
			DataTable^ dt1 = gcnew DataTable();
			sda1->Fill(dt1);
			client_view->DataSource = dt1;
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
	private: System::Void label_prenom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox_complet_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void client_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
