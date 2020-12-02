#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Media;
	using namespace System::Threading::Tasks;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Description résumée de Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{
	public:
		Form6(void)
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
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_exit;
	private: int index;
	private: System::Windows::Forms::TextBox^ txt_id;
	private: System::Windows::Forms::TextBox^ txt_designation;
	private: System::Windows::Forms::TextBox^ txt_ht;
	private: System::Windows::Forms::TextBox^ txt_ref_article;
	private: System::Windows::Forms::TextBox^ txt_tva;
	private: System::Windows::Forms::TextBox^ txt_rea;
	private: System::Windows::Forms::TextBox^ txt_stock;
	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";



	private: System::Windows::Forms::Label^ label_id;
	private: System::Windows::Forms::Label^ label_designation;
	private: System::Windows::Forms::Label^ label_ht;
	private: System::Windows::Forms::Label^ label_ref_article;
	private: System::Windows::Forms::Label^ label_tva;
	private: System::Windows::Forms::Label^ label_rea;
	private: System::Windows::Forms::Label^ label_stock;








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
			this->txt_id = (gcnew System::Windows::Forms::TextBox());
			this->txt_designation = (gcnew System::Windows::Forms::TextBox());
			this->txt_ht = (gcnew System::Windows::Forms::TextBox());
			this->txt_ref_article = (gcnew System::Windows::Forms::TextBox());
			this->txt_tva = (gcnew System::Windows::Forms::TextBox());
			this->txt_rea = (gcnew System::Windows::Forms::TextBox());
			this->txt_stock = (gcnew System::Windows::Forms::TextBox());
			this->label_id = (gcnew System::Windows::Forms::Label());
			this->label_designation = (gcnew System::Windows::Forms::Label());
			this->label_ht = (gcnew System::Windows::Forms::Label());
			this->label_ref_article = (gcnew System::Windows::Forms::Label());
			this->label_tva = (gcnew System::Windows::Forms::Label());
			this->label_rea = (gcnew System::Windows::Forms::Label());
			this->label_stock = (gcnew System::Windows::Forms::Label());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form6::btn_exit_Click);
			// 
			// txt_id
			// 
			this->txt_id->Location = System::Drawing::Point(451, 57);
			this->txt_id->Name = L"txt_id";
			this->txt_id->Size = System::Drawing::Size(163, 22);
			this->txt_id->TabIndex = 12;
			this->txt_id->TextChanged += gcnew System::EventHandler(this, &Form6::txt_id_TextChanged);
			// 
			// txt_designation
			// 
			this->txt_designation->Location = System::Drawing::Point(169, 120);
			this->txt_designation->Name = L"txt_designation";
			this->txt_designation->Size = System::Drawing::Size(197, 22);
			this->txt_designation->TabIndex = 13;
			this->txt_designation->TextChanged += gcnew System::EventHandler(this, &Form6::txt_designation_TextChanged);
			// 
			// txt_ht
			// 
			this->txt_ht->Location = System::Drawing::Point(169, 252);
			this->txt_ht->Name = L"txt_ht";
			this->txt_ht->Size = System::Drawing::Size(197, 22);
			this->txt_ht->TabIndex = 14;
			this->txt_ht->TextChanged += gcnew System::EventHandler(this, &Form6::txt_ht_TextChanged);
			// 
			// txt_ref_article
			// 
			this->txt_ref_article->Location = System::Drawing::Point(169, 413);
			this->txt_ref_article->Name = L"txt_ref_article";
			this->txt_ref_article->Size = System::Drawing::Size(197, 22);
			this->txt_ref_article->TabIndex = 15;
			this->txt_ref_article->TextChanged += gcnew System::EventHandler(this, &Form6::txt_ref_article_TextChanged);
			// 
			// txt_tva
			// 
			this->txt_tva->Location = System::Drawing::Point(742, 118);
			this->txt_tva->Name = L"txt_tva";
			this->txt_tva->Size = System::Drawing::Size(225, 22);
			this->txt_tva->TabIndex = 16;
			this->txt_tva->TextChanged += gcnew System::EventHandler(this, &Form6::txt_tva_TextChanged);
			// 
			// txt_rea
			// 
			this->txt_rea->Location = System::Drawing::Point(742, 252);
			this->txt_rea->Name = L"txt_rea";
			this->txt_rea->Size = System::Drawing::Size(225, 22);
			this->txt_rea->TabIndex = 17;
			this->txt_rea->TextChanged += gcnew System::EventHandler(this, &Form6::txt_rea_TextChanged);
			// 
			// txt_stock
			// 
			this->txt_stock->Location = System::Drawing::Point(742, 413);
			this->txt_stock->Name = L"txt_stock";
			this->txt_stock->Size = System::Drawing::Size(225, 22);
			this->txt_stock->TabIndex = 18;
			this->txt_stock->TextChanged += gcnew System::EventHandler(this, &Form6::txt_stock_TextChanged);
			// 
			// label_id
			// 
			this->label_id->AutoSize = true;
			this->label_id->Location = System::Drawing::Point(424, 62);
			this->label_id->Name = L"label_id";
			this->label_id->Size = System::Drawing::Size(21, 17);
			this->label_id->TabIndex = 19;
			this->label_id->Text = L"ID";
			this->label_id->Click += gcnew System::EventHandler(this, &Form6::label_id_Click);
			// 
			// label_designation
			// 
			this->label_designation->AutoSize = true;
			this->label_designation->Location = System::Drawing::Point(36, 125);
			this->label_designation->Name = L"label_designation";
			this->label_designation->Size = System::Drawing::Size(127, 17);
			this->label_designation->TabIndex = 20;
			this->label_designation->Text = L"designation_article";
			this->label_designation->Click += gcnew System::EventHandler(this, &Form6::label_designation_Click);
			// 
			// label_ht
			// 
			this->label_ht->AutoSize = true;
			this->label_ht->Location = System::Drawing::Point(113, 257);
			this->label_ht->Name = L"label_ht";
			this->label_ht->Size = System::Drawing::Size(50, 17);
			this->label_ht->TabIndex = 21;
			this->label_ht->Text = L"prix_ht";
			this->label_ht->Click += gcnew System::EventHandler(this, &Form6::label_ht_Click);
			// 
			// label_ref_article
			// 
			this->label_ref_article->AutoSize = true;
			this->label_ref_article->Location = System::Drawing::Point(92, 418);
			this->label_ref_article->Name = L"label_ref_article";
			this->label_ref_article->Size = System::Drawing::Size(71, 17);
			this->label_ref_article->TabIndex = 22;
			this->label_ref_article->Text = L"ref_article";
			this->label_ref_article->Click += gcnew System::EventHandler(this, &Form6::label_ref_article_Click);
			// 
			// label_tva
			// 
			this->label_tva->AutoSize = true;
			this->label_tva->Location = System::Drawing::Point(675, 123);
			this->label_tva->Name = L"label_tva";
			this->label_tva->Size = System::Drawing::Size(61, 17);
			this->label_tva->TabIndex = 23;
			this->label_tva->Text = L"taux_tva";
			this->label_tva->Click += gcnew System::EventHandler(this, &Form6::label_tva_Click);
			// 
			// label_rea
			// 
			this->label_rea->AutoSize = true;
			this->label_rea->Location = System::Drawing::Point(670, 257);
			this->label_rea->Name = L"label_rea";
			this->label_rea->Size = System::Drawing::Size(66, 17);
			this->label_rea->TabIndex = 24;
			this->label_rea->Text = L"seuil_rea";
			this->label_rea->Click += gcnew System::EventHandler(this, &Form6::label_rea_Click);
			// 
			// label_stock
			// 
			this->label_stock->AutoSize = true;
			this->label_stock->Location = System::Drawing::Point(636, 418);
			this->label_stock->Name = L"label_stock";
			this->label_stock->Size = System::Drawing::Size(100, 17);
			this->label_stock->TabIndex = 25;
			this->label_stock->Text = L"quantite_stock";
			this->label_stock->Click += gcnew System::EventHandler(this, &Form6::label_stock_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(341, 499);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form6::btn_valider_Click);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 576);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->label_stock);
			this->Controls->Add(this->label_rea);
			this->Controls->Add(this->label_tva);
			this->Controls->Add(this->label_ref_article);
			this->Controls->Add(this->label_ht);
			this->Controls->Add(this->label_designation);
			this->Controls->Add(this->label_id);
			this->Controls->Add(this->txt_stock);
			this->Controls->Add(this->txt_rea);
			this->Controls->Add(this->txt_tva);
			this->Controls->Add(this->txt_ref_article);
			this->Controls->Add(this->txt_ht);
			this->Controls->Add(this->txt_designation);
			this->Controls->Add(this->txt_id);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form6";
			this->Text = L"Form6";
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Form6_Load(System::Object^ sender, System::EventArgs^ e)
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
private: System::Void label_designation_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_designation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_ht_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ht_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_ref_article_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_ref_article_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_tva_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_tva_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_rea_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_rea_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_stock_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_stock_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
{
	SqlConnection^ appli = gcnew SqlConnection(ip);
	appli->Open();
	String^ o = "insert into tab_stock(ID,id_article,seuil_rea,quantite_en_stock)values('" + txt_id->Text->ToString() + "','" + txt_id->Text->ToString() + "','" + txt_rea->Text->ToString() + "','" + txt_stock->Text->ToString() + "')";
	String^ b = "insert into tab_article(ID,designation,prix_ht,ref_article,taux_tva)values('" + txt_id->Text->ToString() + "','" + txt_designation->Text->ToString() + "','" + txt_ht->Text->ToString() + "','" + txt_ref_article->Text->ToString() + "','" + txt_tva->Text->ToString() + "')";

	SqlCommand^ cmd = gcnew SqlCommand(o, appli);
	SqlCommand^ cmd1 = gcnew SqlCommand(b, appli);
	
	cmd->ExecuteNonQuery();
	cmd1->ExecuteNonQuery();
	MessageBox::Show("Données inseré dans la BDD");
	this->Close();
}
};
}
