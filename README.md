🐟 FishFidding
FishFidding is an automatic fish feeding system powered by LOLIN (WEMOS) D1 R2 & mini (ESP8266) and the Blynk IoT app. It allows remote control of a servo motor to dispense fish food, helping you care for your fish effortlessly.

🚀 Features
Feed your fish remotely using the Blynk app.
Servo motor rotates (e.g. to 90°) to dispense food and returns to its original position.
Real-time IoT-based control.
Simple, affordable, and easy to implement.


🛠️ Tech Stack
Hardware: LOLIN (WEMOS) D1 R2 & mini (ESP8266), servo motor
Software: Arduino IDE, Blynk IoT app
Backend: Firebase Firestore (optional, for real-time data logging)


⚡ How it Works
The Blynk app button triggers the servo motor to rotate and dispense food.
When the button is switched off, the servo returns to its default position.


🔧 Installation & Setup
1️⃣ Clone this repository
bash
Copy
Edit
git clone https://github.com/your-username/FishFidding.git
2️⃣ Open the Arduino code in Arduino IDE

3️⃣ Install required libraries
ESP8266 board package
Blynk library
Servo library

4️⃣ Upload code
Connect your LOLIN (WEMOS) board via USB.
Upload using Arduino IDE.

5️⃣ Set up Blynk
Create a project in Blynk.
Add a button linked to the appropriate GPIO pin.

🤝 Contributing
Contributions are welcome! Please open an issue or submit a pull request.

📄 License
This project is open-source under the MIT License.

💡 Author
Om Mamidwar (@natty_om)
