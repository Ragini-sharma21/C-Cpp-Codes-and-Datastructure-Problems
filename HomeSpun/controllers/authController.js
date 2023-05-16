
import userModel from "../models/userModel.js";
import { comparePassword, hashPassword } from "./../helpers/authHelper.js";
import JWT from "jsonwebtoken";

export const registerController = async (req, res) => {
  try {
    const { name, email, password, phone, address } = req.body;       //get name ,phone etc from user model using req.body
    //validations
    if (!name) {
      return res.send({ error: "Name is Required" });    //send responses 
    }
    if (!email) {
      return res.send({ error: "Email is Required" });
    }
    if (!password) {
      return res.send({ error: "Password is Required" });
    }
    if (!phone) {
      return res.send({ error: "Phone no is Required" });
    }
    if (!address) {
      return res.send({ error: "Address is Required" });
    }
    //check   user
    const exisitingUser = await userModel.findOne({ email });  //findone function will find one document on basis of email
    //exisiting user
    if (exisitingUser) {
      return res.status(200).send({
        success: true,
        message: "Already Register please login",
      });
    }
    //register user
    const hashedPassword = await hashPassword(password);   //pass plane password in hashpassword function to get hashed password  , we can use password because we have already acquired password using req.body
    //save
    const user = await new userModel({
      name,
      email,
      phone,
      address,
      password: hashedPassword,   //add hashedpassword
    }).save();        //call save function 

    res.status(201).send({
      success: true,
      message: "User Register Successfully",
      user,    //pass user
    });
  } catch (error) {
    console.log(error);
    res.status(500).send({
      success: false,
      message: "Error in Registeration",
      error,
    });
  }
};
