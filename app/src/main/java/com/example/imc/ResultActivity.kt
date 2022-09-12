package com.example.imc

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import kotlinx.android.synthetic.main.activity_resultado.*
import java.text.DecimalFormat

class ResultActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_resultado)

        val imc = intent.getParcelableExtra<IMC>("value")

        titleDensidadeCorporal.text = imc.nome.toString()

        txt_result.text = imc.calcular()

        val df = DecimalFormat("0.00")

        txt_imc.text = df.format(imc.imc).toString()
        txt_peso.text = imc.peso.toString()
        txt_altura.text = imc.altura.toString()
    }
}