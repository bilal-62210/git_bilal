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
	public ref class Form8 : public System::Windows::Forms::Form
	{
	public:
		Form8(void)
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
		~Form8()
		{
			if (components)
			{
				delete components;
			}
		}
	public: int index;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::GroupBox^ groupBox_client;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Button^ btn_valider;
	public: String^ ip = "Data Source=DESKTOP-K7482RK;Initial Catalog=appli;Integrated Security=True;MultipleActiveResultSets=False;Connect Timeout=30;TrustServerCertificate=False;Application Name=Microsoft SQL Server Data Tools, SQL Server Object Explorer";


	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::Label^ label_prenom;



	private: System::Windows::Forms::Label^ label_nom;


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
			this->groupBox_client = (gcnew System::Windows::Forms::GroupBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label_prenom = (gcnew System::Windows::Forms::Label());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
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
			this->btn_exit->Click += gcnew System::EventHandler(this, &Form8::btn_exit_Click);
			// 
			// groupBox_client
			// 
			this->groupBox_client->Controls->Add(this->txt_prenom);
			this->groupBox_client->Controls->Add(this->txt_nom);
			this->groupBox_client->Controls->Add(this->label_prenom);
			this->groupBox_client->Controls->Add(this->label_nom);
			this->groupBox_client->Location = System::Drawing::Point(144, 157);
			this->groupBox_client->Name = L"groupBox_client";
			this->groupBox_client->Size = System::Drawing::Size(747, 191);
			this->groupBox_client->TabIndex = 12;
			this->groupBox_client->TabStop = false;
			this->groupBox_client->Text = L"client à supprimer:";
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(497, 83);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(198, 22);
			this->txt_prenom->TabIndex = 3;
			this->txt_prenom->TextChanged += gcnew System::EventHandler(this, &Form8::txt_prenom_TextChanged);
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(107, 81);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(189, 22);
			this->txt_nom->TabIndex = 2;
			this->txt_nom->TextChanged += gcnew System::EventHandler(this, &Form8::txt_nom_TextChanged);
			// 
			// label_prenom
			// 
			this->label_prenom->AutoSize = true;
			this->label_prenom->Location = System::Drawing::Point(435, 86);
			this->label_prenom->Name = L"label_prenom";
			this->label_prenom->Size = System::Drawing::Size(56, 17);
			this->label_prenom->TabIndex = 1;
			this->label_prenom->Text = L"prenom";
			this->label_prenom->Click += gcnew System::EventHandler(this, &Form8::label_prenom_Click);
			// 
			// label_nom
			// 
			this->label_nom->AutoSize = true;
			this->label_nom->Location = System::Drawing::Point(36, 86);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(35, 17);
			this->label_nom->TabIndex = 0;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Form8::label_nom_Click);
			// 
			// btn_valider
			// 
			this->btn_valider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_valider->Location = System::Drawing::Point(342, 487);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(350, 36);
			this->btn_valider->TabIndex = 36;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			this->btn_valider->Click += gcnew System::EventHandler(this, &Form8::btn_valider_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1095, 634);
			this->Controls->Add(this->btn_valider);
			this->Controls->Add(this->groupBox_client);
			this->Controls->Add(this->btn_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form7";
			this->Text = L"Form7";
			this->Load += gcnew System::EventHandler(this, &Form8::Form7_Load);
			this->groupBox_client->ResumeLayout(false);
			this->groupBox_client->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Form7_Load(System::Object^ sender, System::EventArgs^ e)
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
	private: System::Void label_prenom_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txt_prenom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_valider_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SqlConnection^ appli = gcnew SqlConnection(ip);
		appli->Open();
		String^ o = "delete from tab_client where nom_client = '" + txt_nom->Text->ToString() + "' AND prenom_client='" + txt_prenom->Text->ToString() + "'";
		SqlCommand^ cmd = gcnew SqlCommand(o, appli);
		cmd->ExecuteNonQuery();
		MessageBox::Show("Données supprimé de la BDD");
		this->Close();

	}
	};
}
