
varying vec4 v_fragmentColor;	
varying vec2 v_texCoord;	
//uniform sampler2D CC_Texture0;	
		
void main()			
{
	vec4 v_orColor = v_fragmentColor * texture2D(CC_Texture0, v_texCoord);
	float gray = dot(v_orColor.rgb, vec3(0.2, 0.1, 0.05));
	gl_FragColor = vec4(v_orColor.r*0.3, v_orColor.g*0.3, v_orColor.b*0.3, v_orColor.a*1.8);
}

