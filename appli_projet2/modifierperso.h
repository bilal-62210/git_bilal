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
	/// Description résumée de Form11
	/// </summary>
	public ref class Form11 : public System::Windows::Forms::Form
	{
	public:
		Form11(void)
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
		~Form11()
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
	private: System::Windows::Forms::TextBox^ txt_superieur;

	private: System::Windows::Forms::TextBox^ txt_adresse;

	private: System::Windows::Forms::TextBox^ txt_date;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ txtnom;


	private: System::Windows::Forms::TextBox^ txt_ID;
	private: System::Windows::Forms::CheckBox^ checkBox_superieur;
	private: System::Windows::Forms::CheckBox^ checkBox_adresse;
	private: System::Windows::Forms::CheckBox^ checkBox_date;
	private: System::Windows::Forms::CheckBox^ checkBox_prenom;
	private: System::Windows::Forms::CheckBox^ checkBox_nom;
	private: System::Windows::Forms::CheckBox^ checkBox_id;














	public:

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
			this->groupBox_modif = (gcnew System::Windows::Forms::GroupBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->groupBox_donnee = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_superieur = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_adresse = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_date = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_prenom = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_nom = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_id = (gcnew System::Windows::Forms::CheckBox());
			this->txt_superieur = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->txt_date = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->txtnom = (gcnew System::Windows::Forms::TextBox());
			this->txt_ID = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->groupBox_modif->SuspendLayout();
			this->groupBox_donnee->SuspendLayout();
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form11::btn_exit_Click);
			// 
			// groupBox_modif
			// 
			this->groupBox_modif->Controls->Add(this->txt_prenom);
			this->groupBox_modif->Controls->Add(this->txt_nom);
			this->groupBox_modif->Controls->Add(this->label_prenom);
			this->groupBox_modif->Controls->Add(this->label_nom);
			this->groupBox_modif->Location = System::Drawing::Point(126, 76);
			this->groupBox_modif->Name = L"groupBox_modif";
			this->groupBox_modif->Size = System::Drawing::Size(805, 86);
			this->groupBox_modif->TabIndex = 12;
			this->groupBox_modif->TabStop = false;
			this->groupBox_modif->Text = L"Personnel à modifier :";
			this->groupBox_modif->Enter += gcnew System::EventHandler(this, &Form11::groupBox_modif_Enter);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(503, 37);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(196, 22);
			this->txt_prenom->TabIndex = 14;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &Form11::txt_prenom_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(112, 31);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(100, 22);
			this->txt_nom->TabIndex = 2;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &Form11::txt_nom_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(413, 37);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(56, 17);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"prenom";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form11::label_prenom_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(32, 37);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form11::label_nom_Click);
			// 
			// groupBox_donnee
			// 
			this->groupBox_donnee->Controls->Add(this->checkBox_superieur);
			this->groupBox_donnee->Controls->Add(this->checkBox_adresse);
			this->groupBox_donnee->Controls->Add(this->checkBox_date);
			this->groupBox_donnee->Controls->Add(this->checkBox_prenom);
			this->groupBox_donnee->Controls->Add(this->checkBox_nom);
			this->groupBox_donnee->Controls->Add(this->checkBox_id);
			this->groupBox_donnee->Controls->Add(this->txt_superieur);
			this->groupBox_donnee->Controls->Add(this->txt_adresse);
			this->groupBox_donnee->Controls->Add(this->txt_date);
			this->groupBox_donnee->Controls->Add(this->textBox5);
			this->groupBox_donnee->Controls->Add(this->txtnom);
			this->groupBox_donnee->Controls->Add(this->txt_ID);
			this->groupBox_donnee->Location = System::Drawing::Point(126, 195);
			this->groupBox_donnee->Name = L"groupBox_donnee";
			this->groupBox_donnee->Size = System::Drawing::Size(805, 384);
			this->groupBox_donnee->TabIndex = 13;
			this->groupBox_donnee->TabStop = false;
			this->groupBox_donnee->Text = L"nouvelles données:";
			this->groupBox_donnee->Enter += gcnew System::EventHandler(this, &Form11::groupBox_donnee_Enter);
			// 
			// checkBox_superieur
			// 
			this->checkBox_superieur->AutoSize = true;
			this->checkBox_superieur->Location = System::Drawing::Point(512, 319);
			this->checkBox_superieur->Name = L"checkBox_superieur";
			this->checkBox_superieur->Size = System::Drawing::Size(90, 21);
			this->checkBox_superieur->TabIndex = 17;
			this->checkBox_superieur->Text = L"superieur";
			this->checkBox_superieur->UseVisualStyleBackColor = true;
			this->checkBox_superieur->CheckedChanged += gcnew System::EventHandler(this, &Form11::checkBox_superieur_CheckedChanged);
			// 
			// checkBox_adresse
			// 
			this->checkBox_adresse->AutoSize = true;
			this->checkBox_adresse->Location = System::Drawing::Point(450, 189);
			this->checkBox_adresse->Name = L"checkBox_adresse";
			this->checkBox_adresse->Size = System::Drawing::Size(152, 21);
			this->checkBox_adresse->TabIndex = 16;
			this->checkBox_adresse->Text = L"adresse_personnel";
			this->checkBox_adresse->UseVisualStyleBackColor = true;
			this->checkBox_adresse->CheckedChanged += gcnew System::EventHandler(this, &Form11::checkBox_adresse_CheckedChanged);
			// 
			// checkBox_date
			// 
			this->checkBox_date->AutoSize = true;
			this->checkBox_date->Location = System::Drawing::Point(459, 74);
			this->checkBox_date->Name = L"checkBox_date";
			this->checkBox_date->Size = System::Drawing::Size(143, 21);
			this->checkBox_date->TabIndex = 15;
			this->checkBox_date->Text = L"date_d\'embauche";
			this->checkBox_date->UseVisualStyleBackColor = true;
			this->checkBox_date->CheckedChanged += gcnew System::EventHandler(this, &Form11::checkBox_date_CheckedChanged);
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
			this->checkBox_prenom->CheckedChanged += gcnew System::EventHandler(this, &Form11::checkBox_prenom_CheckedChanged);
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
			this->checkBox_nom->CheckedChanged += gcnew System::EventHandler(this, &Form11::checkBox_nom_CheckedChanged);
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
			this->checkBox_id->CheckedChanged += gcnew System::EventHandler(this, &Form11::checkBox_id_CheckedChanged);
			// 
			// txt_superieur
			// 
			this->txt_superieur->Location = System::Drawing::Point(608, 319);
			this->txt_superieur->Name = L"txt_superieur";
			this->txt_superieur->Size = System::Drawing::Size(158, 22);
			this->txt_superieur->TabIndex = 11;
			this->txt_superieur->TextChanged += gcnew System::EventHandler(this, &Form11::txt_superieur_TextChanged);
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(608, 189);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(158, 22);
			this->txt_adresse->TabIndex = 10;
			this->txt_adresse->TextChanged += gcnew System::EventHandler(this, &Form11::txt_adresse_TextChanged);
			// 
			// txt_date
			// 
			this->txt_date->Location = System::Drawing::Point(608, 72);
			this->txt_date->Name = L"txt_date";
			this->txt_date->Size = System::Drawing::Size(158, 22);
			this->txt_date->TabIndex = 9;
			this->txt_date->TextChanged += gcnew System::EventHandler(this, &Form11::txt_date_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(193, 321);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form11::textBox5_TextChanged);
			// 
			// txtnom
			// 
			this->txtnom->Location = System::Drawing::Point(193, 191);
			this->txtnom->Name = L"txtnom";
			this->txtnom->Size = System::Drawing::Size(148, 22);
			this->txtnom->TabIndex = 7;
			this->txtnom->TextChanged += gcnew System::EventHandler(this, &Form11::txtnom_TextChanged);
			// 
			// txt_ID
			// 
			this->txt_ID->Location = System::Drawing::Point(193, 74);
			this->txt_ID->Name = L"txt_ID";
			this->txt_ID->Size = System::Drawing::Size(148, 22);
			this->txt_ID->TabIndex = 6;
			this->txt_ID->TextChanged += gcnew System::EventHandler(this, &Form11::txt_ID_TextChanged);
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
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form11::btn_valider_Click);
			// 
			// Form11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 731);
			this->Controls->Add(this->groupBox_donnee);
			this->Controls->Add(this->groupBox_modif);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->btn_valider);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form11";
			this->Text = L"Form11";
			this->Load += gcnew System::EventHandler(this, &Form11::Form11_Load);
			this->groupBox_modif->ResumeLayout(false);
			this->groupBox_modif->PerformLayout();
			this->groupBox_donnee->ResumeLayout(false);
			this->groupBox_donnee->PerformLayout();
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

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txt_date_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txt_adresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void txt_superieur_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void checkBox_id_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_nom_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_prenom_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_date_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_adresse_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void checkBox_superieur_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBox_id->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ o = "UPDATE tab_personnel SET ID = '" + txt_ID->Text->ToString() + "' WHERE nom_personnel='" + txt_nom->Text->ToString() + "'";
		SqlCommand^ cmd = gcnew SqlCommand(o, appli);
		cmd->ExecuteNonQuery();
	}
	if (this->checkBox_nom->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ a = "UPDATE tab_personnel SET nom_personnel = '" + txtnom->Text->ToString() + "' WHERE nom_personnel='" + txt_nom->Text->ToString() + "'";
		SqlCommand^ cmd1 = gcnew SqlCommand(a, appli);
		cmd1->ExecuteNonQuery();
	}
	if (this->checkBox_prenom->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ b = "UPDATE tab_personnel SET prenom_personnel = '" + textBox5->Text->ToString() + "' WHERE nom_personnel='" + txt_nom->Text->ToString() + "'";
		SqlCommand^ cmd2= gcnew SqlCommand(b, appli);
		cmd2->ExecuteNonQuery();
	}
	if (this->checkBox_date->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ c = "UPDATE tab_personnel SET date_embauche = '" + txt_date->Text->ToString() + "' WHERE nom_personnel='" + txt_nom->Text->ToString() + "'";
		SqlCommand^ cmd3 = gcnew SqlCommand(c, appli);
		cmd3->ExecuteNonQuery();
	}
	if (this->checkBox_adresse->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ d = "UPDATE tab_personnel SET adresse_personnel = '" + txt_adresse->Text->ToString() + "' WHERE nom_personnel='" + txt_nom->Text->ToString() + "'";
		SqlCommand^ cmd4 = gcnew SqlCommand(d, appli);
		cmd4->ExecuteNonQuery();
	}
	if (this->checkBox_superieur->Checked == true)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ e = "UPDATE tab_personnel SET superieur = '" + txt_superieur->Text->ToString() + "' WHERE nom_personnel='" + txt_nom->Text->ToString() + "'";
		SqlCommand^ cmd5 = gcnew SqlCommand(e, appli);
		cmd5->ExecuteNonQuery();
	}
	MessageBox::Show("Données modifiées");
	this->Close();

}
};
}
