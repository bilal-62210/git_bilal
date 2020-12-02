#pragma once

#include "ajouterperso.h"
#include "ajouterclient.h"
#include "ajoutercommande.h"
#include "facture.h"
#include "ajoutercatalogue.h"
#include "supprimerperso.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rdb_ajouter;
	private: System::Windows::Forms::RadioButton^ rdb_supprimer;
	private: System::Windows::Forms::RadioButton^ rdb_modifier;
	private: System::Windows::Forms::RadioButton^ rdb_afficher;
	private: System::Windows::Forms::RadioButton^ rdb_personnel;
	private: System::Windows::Forms::RadioButton^ rdb_client;
	private: System::Windows::Forms::RadioButton^ rdb_commande;
	private: System::Windows::Forms::RadioButton^ rdb_catalogue;
	
	private: System::Windows::Forms::Button^ btn_stat;
	private: System::Windows::Forms::Button^ btn_proceder;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

	private: int index;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Erforderliche Methode für die Designerunterstützung.
		   /// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->rdb_ajouter = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_supprimer = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_modifier = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_afficher = (gcnew System::Windows::Forms::RadioButton());
			   this->btn_proceder = (gcnew System::Windows::Forms::Button());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->rdb_catalogue = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_commande = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_client = (gcnew System::Windows::Forms::RadioButton());
			   this->rdb_personnel = (gcnew System::Windows::Forms::RadioButton());
			   this->btn_stat = (gcnew System::Windows::Forms::Button());
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // rdb_ajouter
			   // 
			   this->rdb_ajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_ajouter->ForeColor = System::Drawing::Color::Black;
			   this->rdb_ajouter->AutoSize = true;
			   this->rdb_ajouter->Location = System::Drawing::Point(264, 87);
			   this->rdb_ajouter->Name = L"rdb_ajouter";
			   this->rdb_ajouter->Size = System::Drawing::Size(73, 21);
			   this->rdb_ajouter->TabIndex = 8;
			   this->rdb_ajouter->TabStop = true;
			   this->rdb_ajouter->Text = L"ajouter";
			   this->rdb_ajouter->UseVisualStyleBackColor = true;
			   this->rdb_ajouter->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_ajouter_CheckedChanged);
			   // 
			   // rdb_supprimer
			   // 
			   this->rdb_supprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_supprimer->ForeColor = System::Drawing::Color::Black;
			   this->rdb_supprimer->AutoSize = true;
			   this->rdb_supprimer->Location = System::Drawing::Point(6, 87);
			   this->rdb_supprimer->Name = L"rdb_supprimer";
			   this->rdb_supprimer->Size = System::Drawing::Size(92, 21);
			   this->rdb_supprimer->TabIndex = 7;
			   this->rdb_supprimer->TabStop = true;
			   this->rdb_supprimer->Text = L"supprimer";
			   this->rdb_supprimer->UseVisualStyleBackColor = true;
			   this->rdb_supprimer->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_supprimer_CheckedChanged);
			   // 
			   // rdb_modifier
			   // 
			   this->rdb_modifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_modifier->ForeColor = System::Drawing::Color::Black;
			   this->rdb_modifier->AutoSize = true;
			   this->rdb_modifier->Location = System::Drawing::Point(846, 87);
			   this->rdb_modifier->Name = L"rdb_modifier";
			   this->rdb_modifier->Size = System::Drawing::Size(79, 21);
			   this->rdb_modifier->TabIndex = 6;
			   this->rdb_modifier->TabStop = true;
			   this->rdb_modifier->Text = L"modifier";
			   this->rdb_modifier->UseVisualStyleBackColor = true;
			   this->rdb_modifier->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_modifier_CheckedChanged);
			   // 
			   // rdb_afficher
			   // 
			   this->rdb_afficher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_afficher->ForeColor = System::Drawing::Color::Black;
			   this->rdb_afficher->AutoSize = true;
			   this->rdb_afficher->Location = System::Drawing::Point(553, 87);
			   this->rdb_afficher->Name = L"rdb_afficher";
			   this->rdb_afficher->Size = System::Drawing::Size(76, 21);
			   this->rdb_afficher->TabIndex = 5;
			   this->rdb_afficher->TabStop = true;
			   this->rdb_afficher->Text = L"afficher";
			   this->rdb_afficher->UseVisualStyleBackColor = true;
			   this->rdb_afficher->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_afficher_CheckedChanged);
			   // 
			   // btn_proceder
			   // 
			   this->btn_proceder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_proceder->ForeColor = System::Drawing::Color::Blue;
			   this->btn_proceder->Location = System::Drawing::Point(230, 413);
			   this->btn_proceder->Margin = System::Windows::Forms::Padding(4);
			   this->btn_proceder->Name = L"btn_proceder";
			   this->btn_proceder->Size = System::Drawing::Size(560, 75);
			   this->btn_proceder->TabIndex = 4;
			   this->btn_proceder->Text = L"proceder";
			   this->btn_proceder->UseVisualStyleBackColor = true;
			   this->btn_proceder->Click += gcnew System::EventHandler(this, &Form1::btn_proceder_Click);
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->rdb_ajouter);
			   this->groupBox1->Controls->Add(this->rdb_supprimer);
			   this->groupBox1->Controls->Add(this->rdb_modifier);
			   this->groupBox1->Controls->Add(this->rdb_afficher);
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->groupBox1->ForeColor = System::Drawing::Color::Black;
			   this->groupBox1->Location = System::Drawing::Point(12, 200);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(1011, 147);
			   this->groupBox1->TabIndex = 12;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"type d\'action:";
			   this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->rdb_catalogue);
			   this->groupBox2->Controls->Add(this->rdb_commande);
			   this->groupBox2->Controls->Add(this->rdb_client);
			   this->groupBox2->Controls->Add(this->rdb_personnel);
			   this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->groupBox2->ForeColor = System::Drawing::Color::Black;
			   this->groupBox2->Location = System::Drawing::Point(12, 62);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(1011, 132);
			   this->groupBox2->TabIndex = 11;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"mode gestion:";
			   this->groupBox2->Enter += gcnew System::EventHandler(this, &Form1::groupBox2_Enter);
			   // 
			   // rdb_catalogue
			   // 
			   this->rdb_catalogue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_catalogue->ForeColor = System::Drawing::Color::Black;
			   this->rdb_catalogue->AutoSize = true;
			   this->rdb_catalogue->Location = System::Drawing::Point(846, 75);
			   this->rdb_catalogue->Name = L"rdb_catalogue";
			   this->rdb_catalogue->Size = System::Drawing::Size(91, 21);
			   this->rdb_catalogue->TabIndex = 3;
			   this->rdb_catalogue->TabStop = true;
			   this->rdb_catalogue->Text = L"catalogue";
			   this->rdb_catalogue->UseVisualStyleBackColor = true;
			   this->rdb_catalogue->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_catalogue_CheckedChanged);
			   // 
			   // rdb_commande
			   // 
			   this->rdb_commande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_commande->ForeColor = System::Drawing::Color::Black;
			   this->rdb_commande->AutoSize = true;
			   this->rdb_commande->Location = System::Drawing::Point(553, 75);
			   this->rdb_commande->Name = L"rdb_commande";
			   this->rdb_commande->Size = System::Drawing::Size(98, 21);
			   this->rdb_commande->TabIndex = 2;
			   this->rdb_commande->TabStop = true;
			   this->rdb_commande->Text = L"commande";
			   this->rdb_commande->UseVisualStyleBackColor = true;
			   this->rdb_commande->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_commande_CheckedChanged);
			   // 
			   // rdb_client
			   // 
			   this->rdb_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_client->ForeColor = System::Drawing::Color::Black;
			   this->rdb_client->AutoSize = true;
			   this->rdb_client->Location = System::Drawing::Point(264, 75);
			   this->rdb_client->Name = L"rdb_client";
			   this->rdb_client->Size = System::Drawing::Size(62, 21);
			   this->rdb_client->TabIndex = 1;
			   this->rdb_client->TabStop = true;
			   this->rdb_client->Text = L"client";
			   this->rdb_client->UseVisualStyleBackColor = true;
			   this->rdb_client->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_client_CheckedChanged);
			   // 
			   // rdb_personnel
			   // 
			   this->rdb_personnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->rdb_personnel->ForeColor = System::Drawing::Color::Black;
			   this->rdb_personnel->AutoSize = true;
			   this->rdb_personnel->Location = System::Drawing::Point(6, 75);
			   this->rdb_personnel->Name = L"rdb_personnel";
			   this->rdb_personnel->Size = System::Drawing::Size(92, 21);
			   this->rdb_personnel->TabIndex = 0;
			   this->rdb_personnel->TabStop = true;
			   this->rdb_personnel->Text = L"personnel";
			   this->rdb_personnel->UseVisualStyleBackColor = true;
			   this->rdb_personnel->CheckedChanged += gcnew System::EventHandler(this, &Form1::rdb_personnel_CheckedChanged);
			   // 
			   // btn_stat
			   // 
			   this->btn_stat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			   static_cast<System::Byte>(0)));
			   this->btn_stat->ForeColor = System::Drawing::Color::SaddleBrown;
			   this->btn_stat->Location = System::Drawing::Point(822, 12);
			   this->btn_stat->Margin = System::Windows::Forms::Padding(4);
			   this->btn_stat->Name = L"btn_stat";
			   this->btn_stat->Size = System::Drawing::Size(201, 44);
			   this->btn_stat->TabIndex = 13;
			   this->btn_stat->Text = L"statistiques";
			   this->btn_stat->UseVisualStyleBackColor = true;
			   this->btn_stat->Click += gcnew System::EventHandler(this, &Form1::btn_stat_Click);
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1035, 549);
			   this->Controls->Add(this->btn_stat);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->btn_proceder);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MaximizeBox = false;
			   this->Name = L"Form1";
			   this->Text = L"appli";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private: System::Void rdb_ajouter_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_supprimer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_modifier_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_afficher_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_personnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_commande_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }
	private: System::Void rdb_catalogue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { bool Checked = false; }

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}

	private: System::Void btn_proceder_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((this->rdb_ajouter->Checked == true)&&(this->rdb_personnel->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_ajouter->Checked == true)&&(this->rdb_client->Checked == true))
		{
			this->Hide();
			Form3^ Form = gcnew Form3();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_ajouter->Checked == true)&&(this->rdb_commande->Checked == true))
		{
			this->Hide();
			Form4^ Form = gcnew Form4();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_ajouter->Checked == true)&&(this->rdb_catalogue->Checked == true))
		{
			this->Hide();
			Form6^ Form = gcnew Form6();
			Form->ShowDialog();
			this->Show();
		}
	
		else if ((this->rdb_supprimer->Checked == true)&&(this->rdb_personnel->Checked == true))
		{
			this->Hide();
			Form7^ Form = gcnew Form7();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_supprimer->Checked == true)&&(this->rdb_client->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_supprimer->Checked == true)&&(this->rdb_catalogue->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_supprimer->Checked == true)&&(this->rdb_commande->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		
		else if ((this->rdb_modifier->Checked == true)&&(this->rdb_personnel->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_modifier->Checked == true)&&(this->rdb_client->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_afficher->Checked == true)&&(this->rdb_commande->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_modifier->Checked == true)&&(this->rdb_catalogue->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		
		else if ((this->rdb_afficher->Checked == true)&&(this->rdb_personnel->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_afficher->Checked == true)&&(this->rdb_client->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_afficher->Checked == true)&&(this->rdb_commande->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		else if ((this->rdb_afficher->Checked == true)&&(this->rdb_catalogue->Checked == true))
		{
			this->Hide();
			Form2^ Form = gcnew Form2();
			Form->ShowDialog();
			this->Show();
		}
		
	}
	private: System::Void btn_stat_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		Form2^ Form = gcnew Form2();
		Form->ShowDialog();
		this->Show();
	}
	
};
}
