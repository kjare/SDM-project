# List of Modules: 

* Examination
* Admission
* Authorization 
* Confidentiality 
* Calibration
* Allocation
* Description
* Information
* Validation

# List of entities : 

* **User** : user_id,user_username,user_type,user_email,user_contact

* **Student** : stud_id, stud_Username, stud_formNo, stud_name,stud_contact, stud_qualification,stud_address,stud_password
* **Course faculty** : course_name, course_id, course_syllabus, course_questions, ques_id,ques_correctAns, ques_description,ques_image,choice1, choice2, choice3, choice4
 
* **Adminstrator**: admin_id,admin_role,admin_name,admin_password,stud_data,course_faculty_data, examiner_data, course_data, exam_data,final_statistics
  
* **Examiner** : examiner_id,examiner_password, examiner_role,examiner_name,course_name, course_id, course_syllabus, course_questions, ques_id,ques_correctAns, ques_description,ques_image,choice1, choice2, choice3, choice4
  
* **Director** : login_id,password, stud_data,admin_data, course_faculty_data, examiner_data, course_data, exam_data,final_statistics

* **Questions**: ques_id,ques_correctAns, ques_description,ques_image,choice1, choice2, choice3, choice4

* **Results**: Score_Obtained,stud_name,stud_formNo,stud_Rank, centerAllocated

* **Examination**: exam_date,exam_Time,exam_Centre
