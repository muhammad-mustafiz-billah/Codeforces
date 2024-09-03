#include <bits/stdc++.h>
#include <thread>
#include <chrono>

int main() {
    // Define the frequency of the tone (Hz)
    double frequency = 440.0; // A4 note

    // Define the duration of the sound (seconds)
    double duration = 2.0;

    // Define the sample rate (samples per second)
    int sampleRate = 44100;

    // Calculate the number of samples needed
    int numSamples = static_cast<int>(duration * sampleRate);

    // Calculate the angular frequency
    double angularFrequency = 2.0 * M_PI * frequency;

    // Create an array to hold the audio data
    std::vector<int16_t> audioData(numSamples);

    // Generate a simple sine wave
    for (int i = 0; i < numSamples; ++i) {
        double t = static_cast<double>(i) / sampleRate;
        audioData[i] = static_cast<int16_t>(32767.0 * sin(angularFrequency * t));
    }

    // Play the generated sound
    for (int i = 0; i < numSamples; ++i) {
        std::cout << audioData[i]; // Output the audio data (for demonstration)
    }

    // Wait for the sound to finish playing (you can add more logic here)
    std::this_thread::sleep_for(std::chrono::seconds(static_cast<int>(duration)));

    return 0;
}
