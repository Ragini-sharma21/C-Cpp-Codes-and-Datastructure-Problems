import express from "express";
import  {registerController} from '../controllers/authController.js'
//router object
const router=express.Router()
//routing
//register || method=POST

router.post('/register',registerController)
export default router

