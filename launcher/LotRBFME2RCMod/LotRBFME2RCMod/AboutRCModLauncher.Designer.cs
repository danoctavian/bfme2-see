namespace LotRBFME2RCMod
{
    partial class About
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(About));
            this.Copyright = new System.Windows.Forms.Label();
            this.Version = new System.Windows.Forms.Label();
            this.tableLayoutPanel = new System.Windows.Forms.TableLayoutPanel();
            this.ExtraCpyrght = new System.Windows.Forms.TextBox();
            this.Closebrrn = new System.Windows.Forms.Button();
            this.tableLayoutPanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // Copyright
            // 
            this.Copyright.Dock = System.Windows.Forms.DockStyle.Fill;
            this.Copyright.Font = new System.Drawing.Font("Lucida Handwriting", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Copyright.ForeColor = System.Drawing.Color.OrangeRed;
            this.Copyright.Location = new System.Drawing.Point(6, 65);
            this.Copyright.Margin = new System.Windows.Forms.Padding(6, 0, 3, 0);
            this.Copyright.MaximumSize = new System.Drawing.Size(0, 17);
            this.Copyright.Name = "Copyright";
            this.Copyright.Size = new System.Drawing.Size(417, 17);
            this.Copyright.TabIndex = 21;
            this.Copyright.Text = "Copyright © 2010 Ridder Clan";
            this.Copyright.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Version
            // 
            this.Version.Dock = System.Windows.Forms.DockStyle.Fill;
            this.Version.Font = new System.Drawing.Font("Lucida Handwriting", 8.25F, System.Drawing.FontStyle.Underline, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Version.ForeColor = System.Drawing.Color.Coral;
            this.Version.Location = new System.Drawing.Point(6, 29);
            this.Version.Margin = new System.Windows.Forms.Padding(6, 0, 3, 0);
            this.Version.MaximumSize = new System.Drawing.Size(0, 17);
            this.Version.Name = "Version";
            this.Version.Size = new System.Drawing.Size(417, 17);
            this.Version.TabIndex = 0;
            this.Version.Text = "Version 1.08";
            this.Version.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // tableLayoutPanel
            // 
            this.tableLayoutPanel.ColumnCount = 1;
            this.tableLayoutPanel.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 100F));
            this.tableLayoutPanel.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Absolute, 20F));
            this.tableLayoutPanel.Controls.Add(this.Version, 0, 1);
            this.tableLayoutPanel.Controls.Add(this.Copyright, 0, 2);
            this.tableLayoutPanel.Controls.Add(this.ExtraCpyrght, 0, 3);
            this.tableLayoutPanel.Controls.Add(this.Closebrrn, 0, 4);
            this.tableLayoutPanel.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tableLayoutPanel.Location = new System.Drawing.Point(9, 9);
            this.tableLayoutPanel.Name = "tableLayoutPanel";
            this.tableLayoutPanel.RowCount = 5;
            this.tableLayoutPanel.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 11.1579F));
            this.tableLayoutPanel.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 13.96226F));
            this.tableLayoutPanel.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 9.056603F));
            this.tableLayoutPanel.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 66.41509F));
            this.tableLayoutPanel.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 41F));
            this.tableLayoutPanel.Size = new System.Drawing.Size(426, 304);
            this.tableLayoutPanel.TabIndex = 0;
            // 
            // ExtraCpyrght
            // 
            this.ExtraCpyrght.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.ExtraCpyrght.BackColor = System.Drawing.Color.Maroon;
            this.ExtraCpyrght.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.ExtraCpyrght.Font = new System.Drawing.Font("Times New Roman", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.ExtraCpyrght.ForeColor = System.Drawing.Color.OrangeRed;
            this.ExtraCpyrght.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.ExtraCpyrght.Location = new System.Drawing.Point(3, 91);
            this.ExtraCpyrght.Multiline = true;
            this.ExtraCpyrght.Name = "ExtraCpyrght";
            this.ExtraCpyrght.ReadOnly = true;
            this.ExtraCpyrght.Size = new System.Drawing.Size(420, 167);
            this.ExtraCpyrght.TabIndex = 22;
            this.ExtraCpyrght.Text = resources.GetString("ExtraCpyrght.Text");
            this.ExtraCpyrght.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // Closebrrn
            // 
            this.Closebrrn.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.Closebrrn.DialogResult = System.Windows.Forms.DialogResult.OK;
            this.Closebrrn.FlatStyle = System.Windows.Forms.FlatStyle.Popup;
            this.Closebrrn.ForeColor = System.Drawing.Color.WhiteSmoke;
            this.Closebrrn.Location = new System.Drawing.Point(182, 270);
            this.Closebrrn.Name = "Closebrrn";
            this.Closebrrn.Size = new System.Drawing.Size(61, 25);
            this.Closebrrn.TabIndex = 1;
            this.Closebrrn.Text = "Close";
            this.Closebrrn.UseVisualStyleBackColor = true;
            this.Closebrrn.Click += new System.EventHandler(this.Closebrrn_Click);
            // 
            // About
            // 
            this.AcceptButton = this.Closebrrn;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Maroon;
            this.ClientSize = new System.Drawing.Size(444, 322);
            this.Controls.Add(this.tableLayoutPanel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "About";
            this.Padding = new System.Windows.Forms.Padding(9);
            this.ShowIcon = false;
            this.ShowInTaskbar = false;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "About the RC Mod Launcher";
            this.TopMost = true;
            this.tableLayoutPanel.ResumeLayout(false);
            this.tableLayoutPanel.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label Copyright;
        private System.Windows.Forms.Label Version;
        private System.Windows.Forms.TableLayoutPanel tableLayoutPanel;
        private System.Windows.Forms.TextBox ExtraCpyrght;
        private System.Windows.Forms.Button Closebrrn;

    }
}
