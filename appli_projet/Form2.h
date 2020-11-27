#pragma once
#pragma once

namespace  CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Description r�sum�e de MyForm1
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_exit;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: int index;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette m�thode avec l'�diteur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->btn_exit = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   //
			   //exit
			   //
			   this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_exit->ForeColor = System::Drawing::Color::Blue;
			   this->btn_exit->Location = System::Drawing::Point(15, 15);
			   this->btn_exit->Name = L"btn_exit";
			   this->btn_exit->Size = System::Drawing::Size(100, 25);
			   this->btn_exit->TabIndex = 11;
			   this->btn_exit->Text = L"Retour";
			   this->btn_exit->UseVisualStyleBackColor = true;
			   this->btn_exit->Click += gcnew System::EventHandler(this, &Form2::btn_exit_Click);
			   //
			   //Form2
			   //
			   this->components = gcnew System::ComponentModel::Container();
			   this->Size = System::Drawing::Size(300, 300);
			   this->Text = L"Form1";
			   this->Padding = System::Windows::Forms::Padding(0);
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1200, 500);
			   this->Controls->Add(this->btn_exit);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MaximizeBox = false;
			   this->Name = L"Personnel";
			   this->Text = L"Gestion du Personnel";
			   this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();
		   }
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->index = 0;
	}
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	};
}
