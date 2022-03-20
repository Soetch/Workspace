namespace FIRSTAPP;

public partial class HomePage : Form
{
    public string button1Name = "btn";
    public HomePage()
    {
        InitializeComponent();
    }
    public void InitializeAll() {
        // Objects Declarations
        Button btnMain = new Button();
        
        // Properties of btnMain
        btnMain.Location = new Point(10, 10);
        btnMain.Text = "Main";
        btnMain.BackColor = Color.FromArgb(255, 244, 128);
        btnMain.DialogResult = DialogResult.OK;

        // Add Objects to the Controls
        Controls.Add(btnMain);
    }
}
