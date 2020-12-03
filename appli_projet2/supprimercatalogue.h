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
	/// Description résumée de Form7
	/// </summary>
	public ref class Form10 : public System::Windows::Forms::Form
	{
	public:
		Form10(void)
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
		~Form10()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int index;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::GroupBox^ groupBox_catalogue;
	private: System::Windows::Forms::TextBox^ txt_id;

	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";


	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ label_prenom;



	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ stock_view;
	private: System::Windows::Forms::DataGridView^ article_view;




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
			this->groupBox_catalogue = (gcnew System::Windows::Forms::GroupBox());
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->stock_view = (gcnew System::Windows::Forms::DataGridView());
			this->article_view = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox_catalogue->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stock_view))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->article_view))->BeginInit();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form10::btn_exit_Click);
			// 
			// groupBox_catalogue
			// 
			this->groupBox_catalogue->Controls->Add(this->txt_id);
			this->groupBox_catalogue->Controls->Add(this->txt_nom);
			this->groupBox_catalogue->Controls->Add(this->label_prenom);
			this->groupBox_catalogue->Controls->Add(this->label_nom);
			this->groupBox_catalogue->Location = System::Drawing::Point(217, 258);
			this->groupBox_catalogue->Name = L"groupBox_catalogue";
			this->groupBox_catalogue->Size = System::Drawing::Size(747, 191);
			this->groupBox_catalogue->TabIndex = 12;
			this->groupBox_catalogue->TabStop = false;
			this->groupBox_catalogue->Text = L"article à supprimer:";
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(510, 81);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(198, 22);
			this->txt_id->TabIndex = 3;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form10::txt_id_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(107, 81);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(189, 22);
			this->txt_nom->TabIndex = 2;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &Form10::txt_nom_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(435, 86);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(69, 17);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"identifiant";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form10::label_id_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(36, 86);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form10::label_nom_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(437, 515);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form10::btn_valider_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 38);
			this->button1->TabIndex = 37;
			this->button1->Text = L"afficher le catalogue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form10::button1_Click);
			// 
			// stock_view
			// 
			this->stock_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->stock_view->Location = System::Drawing::Point(205, 12);
			this->stock_view->Name = L"stock_view";
			this->stock_view->RowHeadersWidth = 51;
			this->stock_view->RowTemplate->Height = 24;
			this->stock_view->Size = System::Drawing::Size(394, 226);
			this->stock_view->TabIndex = 38;
			this->stock_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form10::stock_view_CellContentClick);
			// 
			// article_view
			// 
			this->article_view->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->article_view->Location = System::Drawing::Point(632, 12);
			this->article_view->Name = L"article_view";
			this->article_view->RowHeadersWidth = 51;
			this->article_view->RowTemplate->Height = 24;
			this->article_view->Size = System::Drawing::Size(404, 226);
			this->article_view->TabIndex = 39;
			this->article_view->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form10::article_view_CellContentClick);
			// 
			// Form10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1216, 634);
			this->Controls->Add(this->article_view);
			this->Controls->Add(this->stock_view);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->groupBox_catalogue);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form10";
			this->Text = L"Gestion";
			this->Load += gcnew System::EventHandler(this, &Form10::Form10_Load);
			this->groupBox_catalogue->ResumeLayout(false);
			this->groupBox_catalogue->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stock_view))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->article_view))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Form10_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}

	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}



	private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label_id_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ p = "delete from tab_stock where id_article = '" + txt_id->Text->ToString()+"'";
		String^ o = "delete from tab_article where designation = '" + txt_nom->Text->ToString()+"'";
		SqlCommand^ cmd = gcnew SqlCommand(p, appli);
		SqlCommand^ cmd1 = gcnew SqlCommand(o, appli);
		cmd->ExecuteNonQuery();
		cmd1->ExecuteNonQuery();
		MessageBox::Show("Données supprimé de la BDD");
		
	}

	private: System::Void article_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void stock_view_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SqlConnection^ appli = gcnew SqlConnection(ip);
	appli->Open();

	String^ z = "select* from tab_stock ";
	SqlDataAdapter^ sda5 = gcnew SqlDataAdapter(z, appli);
	DataTable^ dt5 = gcnew DataTable();
	sda5->Fill(dt5);
	stock_view->DataSource = dt5;
	String^ w = "select* from tab_article";
	SqlDataAdapter^ sda6 = gcnew SqlDataAdapter(w, appli);
	DataTable^ dt6 = gcnew DataTable();
	sda6->Fill(dt6);
	article_view->DataSource = dt6;

}
};
}
