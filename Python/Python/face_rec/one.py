import face_recognition
import cv2
import numpy as np
import csv
import os
from datetime import datetime

video_capture = cv2.VideoCapture(0)

# Load face encodings and names
sindhu_image = face_recognition.load_image_file("Database/PVSindhu.jpg")
sindhu_encoding = face_recognition.face_encodings(sindhu_image)[0]

ratan_tata_image = face_recognition.load_image_file("Database/RatanTata.jpg")
ratan_tata_encoding = face_recognition.face_encodings(ratan_tata_image)[0]

neeraj_image = face_recognition.load_image_file("Database/neeraj.jpg")
neeraj_encoding = face_recognition.face_encodings(neeraj_image)[0]

janhvi_image = face_recognition.load_image_file("Database/janhvi.jpg")
janhvi_encoding = face_recognition.face_encodings(janhvi_image)[0]

known_face_encodings = [sindhu_encoding, ratan_tata_encoding, neeraj_encoding, janhvi_encoding]
known_faces_names = ["sindhu", "ratan tata", "neeraj", "janhvi"]

# Create CSV file for attendance
now = datetime.now()
current_date = now.strftime("%Y-%m-%d")
csv_file_path = current_date + '.csv'
with open(csv_file_path, 'w+', newline='') as csv_file:
    csv_writer = csv.writer(csv_file)
    csv_writer.writerow(["Name", "Time"])

students = known_faces_names.copy()

while True:
    _, frame = video_capture.read()
    small_frame = cv2.resize(frame, (0, 0), fx=0.25, fy=0.25)
    rgb_small_frame = small_frame[:, :, ::-1]
    
    # Face recognition
    face_locations = face_recognition.face_locations(rgb_small_frame)
    face_encodings = face_recognition.face_encodings(rgb_small_frame, face_locations)
    face_names = []

    for face_encoding in face_encodings:
        matches = face_recognition.compare_faces(known_face_encodings, face_encoding)
        name = "Unknown"  # Default name if no match found
        face_distances = face_recognition.face_distance(known_face_encodings, face_encoding)
        best_match_index = np.argmin(face_distances)

        if matches[best_match_index]:
            name = known_faces_names[best_match_index]

        face_names.append(name)

        # Update display and attendance
        if name in known_faces_names:
            font = cv2.FONT_HERSHEY_SIMPLEX
            bottom_left_corner_of_text = (10, 100)
            font_scale = 1.5
            font_color = (255, 0, 0)
            thickness = 3
            line_type = 2

            cv2.putText(frame, name + ' Present',
                        bottom_left_corner_of_text,
                        font,
                        font_scale,
                        font_color,
                        thickness,
                        line_type)

            if name in students:
                students.remove(name)
                print(students)
                current_time = now.strftime("%H:%M:%S")
                with open(csv_file_path, 'a', newline='') as csv_file:
                    csv_writer = csv.writer(csv_file)
                    csv_writer.writerow([name, current_time])

    # Display the frame
    cv2.imshow("Attendance System", frame)

    # Quit the program when 'q' key is pressed
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release video capture and close all windows
video_capture.release()
cv2.destroyAllWindows()
