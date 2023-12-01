import qrcode

# Function to create a QR code
def create_qr_with_password(data, password):
    # Encode the data along with the password
    encoded_data = f"{data}|{password}"
    
    # Generate QR code
    qr = qrcode.QRCode(
        version=1,
        error_correction=qrcode.constants.ERROR_CORRECT_L,
        box_size=10,
        border=4,
    )
    qr.add_data(encoded_data)
    qr.make(fit=True)

    # Create an image from the QR code
    img = qr.make_image(fill_color="black", back_color="white")
    img.save("secure_qr.png")  # Save the QR code as an image

# Function to read QR code and validate password
def read_qr_with_password(qr_image_path):
    # Read QR code image
    img = qrcode.image.imread(qr_image_path)
    qr = qrcode.QRCode()
    qr.add_data(img)
    qr.make(fit=True)
    decoded_data = qr.data.decode()

    # Split data and password
    data, password = decoded_data.split('|')

    # Ask for password to reveal the content
    user_password = input("Enter the password to reveal the content: ")

    # Check if the entered password matches
    if user_password == password:
        print("Decoded data:", data)
    else:
        print("Incorrect password!")

# Usage example
data_to_encode = "Your secret message here"
password_to_protect = "YourPassword123"

# Create the QR code with the provided data and password
create_qr_with_password(data_to_encode, password_to_protect)

# Read the QR code and ask for the password to reveal the content
read_qr_with_password("secure_qr.png")