using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Media;

using System.Diagnostics;
using Microsoft.Win32;

namespace LotRBFME2RCMod
{
    public partial class RCModLauncherMain : Form
    {
        SoundPlayer MEnterSound = new SoundPlayer(Application.StartupPath + "/Launcher/MEnter.wav");
        SoundPlayer MClickSound = new SoundPlayer(Application.StartupPath + "/Launcher/MClick.wav");

        public RCModLauncherMain()
        {
            InitializeComponent();

        }

        private void OpenAModDialog_HelpRequest(object sender, EventArgs e)
        {
            MessageBox.Show("Chicken");
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            LotRBFME2RCMod.RCModLauncherMain.ActiveForm.Close();
        }

        private void aboutTheRCModToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form Other = new About();
            Other.Show();
        }

        private void webToolStripMenuItem_Click(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            //MessageBox.Show("Opens The Web browser...");
            Process.Start(InstallDirectory + "/Support/RCModWebBrowser.exe");   
        }

        private void eASupportToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Attempt to open the key
            RegistryKey keywin32sys = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II\\ergc", true);
            RegistryKey keywin64sys = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Wow6432Node\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II\\ergc", true);

            if (keywin64sys == null & keywin32sys == null)
                MessageBox.Show("You do not have The Lord of the Rings: The Battle for Middle-earth (tm) II installed on your system!");
            else if (keywin64sys == null)
            {
                //The BFME 2 Game location
                RegistryKey LOTRBFMEIILOCREG = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II", true);
                String LOTRBFMEIILOC;
                LOTRBFMEIILOC = (String)LOTRBFMEIILOCREG.GetValue("InstallPath");
                Process.Start(LOTRBFMEIILOC + "/Support/European Help Files/EA_Help_Select.htm");
            }
            else
            {
                //The BFME 2 Game location
                RegistryKey LOTRBFMEIILOCREG = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Wow6432Node\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II", true);
                String LOTRBFMEIILOC;
                LOTRBFMEIILOC = (String)LOTRBFMEIILOCREG.GetValue("InstallPath");
                Process.Start(LOTRBFMEIILOC + "/Support/European Help Files/EA_Help_Select.htm");
            }
        }

        private void bFMEIIReadMeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Attempt to open the key
            RegistryKey keywin32sys = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II\\ergc", true);
            RegistryKey keywin64sys = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Wow6432Node\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II\\ergc", true);

            if (keywin64sys == null & keywin32sys == null)
                MessageBox.Show("You do not have The Lord of the Rings: The Battle for Middle-earth (tm) II installed on your system!");
            else if (keywin64sys == null)
            {
                //The BFME 2 Game location
                RegistryKey LOTRBFMEIILOCREG = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II", true);
                String LOTRBFMEIILOC;
                LOTRBFMEIILOC = (String)LOTRBFMEIILOCREG.GetValue("InstallPath");
                Process.Start(LOTRBFMEIILOC + "/Support/en-uk/readme.txt");
            }
            else
            {
                //The BFME 2 Game location
                RegistryKey LOTRBFMEIILOCREG = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Wow6432Node\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II", true);
                String LOTRBFMEIILOC;
                LOTRBFMEIILOC = (String)LOTRBFMEIILOCREG.GetValue("InstallPath");
                Process.Start(LOTRBFMEIILOC + "/Support/en-uk/readme.txt");
            }
        }

        private void rCModReadmeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            Process.Start(InstallDirectory + "/Install.txt");
        }

        private void manuallyReEnterSerialToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult result1 = MessageBox.Show("ARE YOU SURE YOU WANT TO RE-ENTER YOUR SERIAL? \n Only do this if you are encountering auto-kills after 3.5 minutes or so!",
                "Critical Warning",
                MessageBoxButtons.YesNo,
                MessageBoxIcon.Warning);
            if (result1 == DialogResult.Yes)
            {
                String InstallDirectory;
                InstallDirectory = (Application.StartupPath);
                Process.Start(InstallDirectory + "/Support/The Battle for Middle-earth II - RC Mod_code.exe");
            }
        }

        private void gameDoesNotPassSplashScreenToolStripMenuItem_Click(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            Process.Start(InstallDirectory + "/Support/RCMod Registrator.exe");
        }

        private void multiplayerVersionMismatchToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Whenever I try to join a friend in a LAN game, the game detects a version mismatch! \n Solutions: \n -Make sure you are running the MULTIPLAYER version of the Mod! \n -Make sure you have not modified the game's files!",
                "Possible Solutions:",
                MessageBoxButtons.OK,
                MessageBoxIcon.Information);
        }

        private void iPurchasedROTWKViaToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("I do NOT have the ROTWK CD! \n Solutions: \n -Buy ROTWK! \n -Mount the RC Mod CD! \n ------------ \n I Downloaded ROTWK via EA Download Manager! \n -Replace the MPGame.dat in the RC Mod install directory with the Game.dat from your ROTWK install directory!",
                "Possible Solutions:",
                MessageBoxButtons.OK,
                MessageBoxIcon.Information);
        }

        private void launchersFeaturesToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("The RC Mod Launcher allows you to: \n \n - Customize different aspects of the game such as: \n --- Game Resolution \n --- Run game in Windowed Mode \n --- Disable the Main Menu's Shellmap (Movie) \n --- Disable all ingame Audio \n \n - Play Singleplayer without needing a CD! \n \n - Open the RC Mod's Worldbuilder \n \n - Run a Mod for the RC Mod! \n \n - Check if your version is up to date! \n \n - Look at Help files if they are needed. \n \n - Open the RC Mod Web browser to see all the things related to the RC Mod!",
                "The RC Mod Launcher Features",
                MessageBoxButtons.OK,
                MessageBoxIcon.Information);
        }

        private void LaunchSEE_MouseEnter(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            LaunchSEE.Image = Image.FromFile(InstallDirectory + "/Launcher/button_s.256");
            if (MEnterSound != null)
            { MEnterSound.Play(); }
       }

        private void LaunchSEE_MouseLeave(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            LaunchSEE.Image = Image.FromFile(InstallDirectory + "/Launcher/button.256");
        }

        private void WorldbuilderButton_MouseEnter(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            WorldbuilderButton.Image = Image.FromFile(InstallDirectory + "/Launcher/button_s.256");
            if (MEnterSound != null)
            { MEnterSound.Play(); }
        }

        private void WorldbuilderButton_MouseLeave(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            WorldbuilderButton.Image = Image.FromFile(InstallDirectory + "/Launcher/button.256");
        }

        private void LaunchSEE_Click(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);

            if (MClickSound != null)
            { MClickSound.Play(); }

            String EXEModifiers = " ";
            String WindowedMode;
            String ShellmapMode;
            String NoAudioMode;
            String InGameXRes;
            String InGameYRes;
            String RCModLotROnlyMod;
            String RCModDebugScriptLiteMode;
            String RCModDebugScript2Mode;

            /////Windowed?
            if (RCMODWINDOWMODECKBX.Checked == true)
                WindowedMode = " -win";
            else
                WindowedMode = "";
            /////Shellmap?
            if (RCMODSHELLMAPMODECKBX.Checked == false)
                ShellmapMode = " -noshellmap";
            else
                ShellmapMode = "";
            /////Shellmap?
            if (RCMODAUDIOMODECKBX.Checked == false)
                NoAudioMode = " -noaudio";
            else
                NoAudioMode = "";

            /////Resolution?-----------------------------------------------------------------------
            InGameXRes = "";
            InGameYRes = "";
            ////----4:3------------------------------------------------------------------
            if (RCMODRESOLUTIONCOMBOBOX.Text == "800 x 600")
            {InGameXRes = " -xres 800"; InGameYRes = " -yres 600";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "1024 x 768")
            {InGameXRes = " -xres 1024"; InGameYRes = " -yres 768";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "1600 x 1200")
            {InGameXRes = " -xres 1600"; InGameYRes = " -yres 1200";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "1920 x 1440")
            {InGameXRes = " -xres 1920"; InGameYRes = " -yres 1440";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "2048 x 1536")
            {InGameXRes = " -xres 2048"; InGameYRes = " -yres 1536";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "2560 x 1920")
            {InGameXRes = " -xres 2560"; InGameYRes = " -yres 1920";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "4096 x 3072")
            {InGameXRes = " -xres 4096"; InGameYRes = " -yres 3072";}

            if (RCMODRESOLUTIONCOMBOBOX.Text == "6400 x 4800")
            {InGameXRes = " -xres 6400"; InGameYRes = " -yres 4800";}
            ////---16:9------------------------------------------------------------------
            if (RCMODRESOLUTIONCOMBOBOX.Text == "1024 x 576")
            { InGameXRes = " -xres 1024"; InGameYRes = " -yres 576"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "1600 x 900")
            { InGameXRes = " -xres 1600"; InGameYRes = " -yres 900"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "1920 x 1080")
            { InGameXRes = " -xres 1920"; InGameYRes = " -yres 1080"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "2048 x 1152")
            { InGameXRes = " -xres 2048"; InGameYRes = " -yres 1152"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "2560 x 1440")
            { InGameXRes = " -xres 2560"; InGameYRes = " -yres 1440"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "4096 x 2304")
            { InGameXRes = " -xres 4096"; InGameYRes = " -yres 2304"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "7680 x 4320")
            { InGameXRes = " -xres 7680"; InGameYRes = " -yres 4320"; }
            ////---16:10-----------------------------------------------------------------
            if (RCMODRESOLUTIONCOMBOBOX.Text == "1024 x 640")
            { InGameXRes = " -xres 1024"; InGameYRes = " -yres 640"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "1920 x 1200")
            { InGameXRes = " -xres 1920"; InGameYRes = " -yres 1200"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "2560 x 1600")
            { InGameXRes = " -xres 2560"; InGameYRes = " -yres 1600"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "3840 x 2400")
            { InGameXRes = " -xres 3840"; InGameYRes = " -yres 2400"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "5120 x 3200")
            { InGameXRes = " -xres 5120"; InGameYRes = " -yres 3200"; }

            if (RCMODRESOLUTIONCOMBOBOX.Text == "7680 x 4800")
            { InGameXRes = " -xres 7680"; InGameYRes = " -yres 4800"; }

            /////Allow Non LotR Factions?
            if (RCMODNONLOTRMODECKBX.Checked == false)
                RCModLotROnlyMod = " -mod " + InstallDirectory + "\\mods\\DisableNonLotR";
            else
                RCModLotROnlyMod = "";

            /////Debug Script Lite?
            if (RCMODSCRIPTLITECHCKBX.Checked == true)
                RCModDebugScriptLiteMode = " -scriptdebuglite";
            else
                RCModDebugScriptLiteMode = "";

            /////Debug Script 2?
            if (RCMODSCRIPT2CHCKBX.Checked == true)
                RCModDebugScript2Mode = " -scriptdebug2";
            else
                RCModDebugScript2Mode = "";

            /////Sum up the Modifiers...
            EXEModifiers += WindowedMode;
            EXEModifiers += ShellmapMode;
            EXEModifiers += NoAudioMode;
            EXEModifiers += InGameXRes;
            EXEModifiers += InGameYRes;
            EXEModifiers += RCModLotROnlyMod;
            EXEModifiers += RCModDebugScriptLiteMode;
            EXEModifiers += RCModDebugScript2Mode;

            //REMIND INSERT CD!
            MessageBox.Show("Remember to insert the ROTWK CD! \n OR Mount the RC Mod CD with Daemon Tools!",
                "Insert CD",
                MessageBoxButtons.OK,
                MessageBoxIcon.Information);

            /////Start the EXE!
            if (EXEModifiers == null || EXEModifiers == " " || EXEModifiers == "")
                Process.Start(InstallDirectory + "/SEE.exe");
            else
                Process.Start(InstallDirectory + "/SEE.exe", EXEModifiers);
        }

        private void WorldbuilderButton_Click(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            if (MClickSound != null)
            { MClickSound.Play(); }

            Process.Start(InstallDirectory + "/Worldbuilder.exe");   
        }

        private void RIDDERCLANLOGO_Click(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            if (MClickSound != null)
            { MClickSound.Play(); }

            // Attempt to open the key
            RegistryKey keywin32sys = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II - RC Mod", true);
            RegistryKey keywin64sys = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Wow6432Node\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II - RC Mod", true);

            Object LOTRBFMEIICDKey;
            LOTRBFMEIICDKey = "TEST";

            if (keywin64sys == null & keywin32sys == null)
                MessageBox.Show("You do not have The Lord of the Rings: The Battle for Middle-earth (tm) II RC Mod installed on your system!");
            else if (keywin64sys == null)
            {
                //The Registry!

                RegistryKey LOTRBFMEIIRCMODLOCREG = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II - RC Mod", true);
                String LOTRBFMEIIRCMODLOC;
                String LOTRBFMEIIRCMODGM2DAT;
                LOTRBFMEIIRCMODLOC = (String)LOTRBFMEIIRCMODLOCREG.GetValue("RCInstallPath");
                //MessageBox.Show(LOTRBFMEIIRCMODLOC);
                LOTRBFMEIIRCMODGM2DAT = LOTRBFMEIIRCMODLOC + "\\game2.dat";
                //MessageBox.Show(LOTRBFMEIIRCMODGM2DAT);

                Process.Start(LOTRBFMEIIRCMODLOC + "/lotrbfme2RCMod.exe");
                LotRBFME2RCMod.RCModLauncherMain.ActiveForm.Close();
            }
            else
            {
                //The Registry!

                RegistryKey LOTRBFMEIIRCMODLOCREG = Registry.LocalMachine.OpenSubKey("SOFTWARE\\Wow6432Node\\Electronic Arts\\Electronic Arts\\The Battle for Middle-earth II - RC Mod", true);
                String LOTRBFMEIIRCMODLOC;
                String LOTRBFMEIIRCMODGM2DAT;
                LOTRBFMEIIRCMODLOC = (String)LOTRBFMEIIRCMODLOCREG.GetValue("RCInstallPath");
                //MessageBox.Show(LOTRBFMEIIRCMODLOC);
                LOTRBFMEIIRCMODGM2DAT = LOTRBFMEIIRCMODLOC + "\\game2.dat";
                //MessageBox.Show(LOTRBFMEIIRCMODGM2DAT);

                Process.Start(LOTRBFMEIIRCMODLOC + "/lotrbfme2RCMod.exe");
                LotRBFME2RCMod.RCModLauncherMain.ActiveForm.Close();
            }
        }

        private void RIDDERCLANLOGO_MouseEnter(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            RIDDERCLANLOGO.Image = Image.FromFile(InstallDirectory + "/Launcher/RCLogo_s.256");
            if (MEnterSound != null)
            { MEnterSound.Play(); }
        }

        private void RIDDERCLANLOGO_MouseLeave(object sender, EventArgs e)
        {
            String InstallDirectory;
            InstallDirectory = (Application.StartupPath);
            RIDDERCLANLOGO.Image = Image.FromFile(InstallDirectory + "/Launcher/RCLogo_u.256");
        }
    }
}